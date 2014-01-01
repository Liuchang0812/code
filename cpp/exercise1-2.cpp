#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/cstdint.hpp>
#include <boost/bind.hpp>
#include <boost/thread.hpp>
#include <iostream>

boost::uint64_t sum = 0;
boost::mutex mtx;

void getSum(int bg, int ed){
    boost::uint64_t local_sum = 0;
    for (int i = bg;i != ed;i ++)
    {
        local_sum += i;
    }
    {
    boost::lock_guard<boost::mutex> mlock(mtx);
    sum += local_sum;
    }
}

int main()
{
    boost::posix_time::ptime start = boost::posix_time::microsec_clock::local_time();
    boost::thread t1(boost::bind(&getSum,0,5000000000));
    boost::thread t2(boost::bind(&getSum,5000000000,1000000000));
    t1.join();
    t2.join();
    boost::posix_time::ptime end = boost::posix_time::microsec_clock::local_time();
    std::cout << end - start << std::endl;
    std::cout << sum << std::endl;
}

