import urllib
import re

url = 'http://www.pythonchallenge.com/pc/def/ocr.html'


def getsource(url):
    res = urllib.urlopen(url)
    if res.code != 200:
        raise exception("open url %s error"% url)
    txt = res.read()
    if len(txt) == 0:
        raise exception("read url %s error"% url)

    return txt[txt.rfind("<!--") + 4: txt.rfind("-->")]

def process(txt):
    return re.findall("[A-Za-z]", getsource(url))

if __name__ == "__main__":
    print process(getsource)
