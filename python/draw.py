import os
import matplotlib.pyplot as plt
import re
import logging

gTargetDir = "d:\yuelao"
regex = None
mlogger = None


def initLog():
    global mlogger
    mlogger = logging.getLogger("yuelao.draw")
    hdlr = logging.FileHandler("yuelao.draw.log")
    hdlr.setLevel(logging.DEBUG)
    fmt = logging.Formatter("%(asctime)s - %(levelno)s - %(message)s")
    hdlr.setFormatter(fmt)
    mlogger.addHandler(hdlr)

    hdlr = logging.StreamHandler()
    hdlr.setLevel(logging.DEBUG)
    mlogger.addHandler(hdlr)

def getLog():
    global mlogger
    if mlogger == None:
        initLog()
    return mlogger

def initRe():
    ''' init regex match object '''
    global regex
    regex = re.compile("(\[(INSERT|READ)\], \d+, \d+)", re.MULTILINE)


def getFiles(dirpath):
    ''' Get file list of target directory'''
    files = os.listdir(dirpath)
    mlogger.info("Get files : %s" % str(files) )
    pathtofile = []
    for f in files:
        pathtofile.append( os.path.join(dirpath, f) )
    return pathtofile
    
def proceFile(filename):
        ''' process a file '''
    #try:
        with open(filename, "r") as f:
            print filename
            content = f.read()
            content = regex.findall(content)

            insertvec = []
            readvec = []
            for item in content:
                
                if item[1].find("INSERT") != -1:
                    
                    insertvec.append(int((item[0].split(","))[2]))
                else:                 
                    readvec.append(int((item[0].split(","))[2]))
            
            lenofinsert = len(insertvec)
            lenofread = len(readvec)

            #95%
            sumofinsert = sum (insertvec)
            sumofread = sum (readvec)
            for i in range(lenofinsert):
                if sum(insertvec[:i+1]) >= sumofinsert * 0.95:
                    print "%d : %d" %(i,insertvec[i])
                    break
            for i in range(lenofread):
                if sum(readvec[:i+1]) >= sumofread * 0.95:
                    print "%d : %d" % (i,readvec[i])
                    break
                
            while lenofinsert > 0 and insertvec[lenofinsert-1] == 0:
                lenofinsert -= 1
            while lenofread > 0 and readvec[lenofread-1] == 0:
                lenofread -= 1
                
            mlogger.info("insert vec:\n %s"%insertvec)
            mlogger.info("read vec:\n %s"%readvec)
            fig, (ax0, ax1) = plt.subplots(2)
            ax0.set_title("Latency of insert operations")
            #ax0.set_xlabel(" time(us) ")
            ax0.plot(insertvec[:lenofinsert], 'r')
            ax1.set_title("Latency of read operations")
            ax1.set_xlabel(" time(us) ")
            ax1.plot(readvec[:lenofread],'b')
            #plt.plot(insertvec[:lenofinsert],'r')
            plt.suptitle( os.path.basename(filename)+".png" )
            #plt.show()
            plt.savefig(os.path.basename(filename)+".png")
                
    #except Exception,e:
    #       mlogger.error("process %s error" % filename)


if __name__ == "__main__":
    initLog()
    initRe()
    for f in getFiles("d:/yuelao"):
        proceFile(f)
