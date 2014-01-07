#include "db.h"
#include <cstdlib>
#include "boost/thread.hpp"
#include "boost/random.hpp"


class BasicDB: public DB
{
    public:
        BasicDB()
        {
            todelay=0;
        }

        void delay()
        {
            if (todelay>0)
            {
                try
                {
                    uint64_t _msecs = random() % 1024() ;
                    boost::thread::sleep(boost::posix_time::milliseconds(_msecs));
                }
                catch ( thread_interrupted e) {
                }
            }
        }

        public void init()
        {
            


    private:
        boolean verbose;
        int todelay;

