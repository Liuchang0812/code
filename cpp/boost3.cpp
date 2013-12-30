#include <boost/test/included/unit_test.hpp>
using namespace boost::unit_test;

void free_test_function()
{
    BOOST_CHECK(true);
}

void test_power()
{
    BOOST_CHECK( 4 > 5) ;
}
test_suite*
init_unit_test_suite(int argc, char* argv[])
{
    framework::master_test_suite().
        add(BOOST_TEST_CASE( &free_test_function)) ;
    framework::master_test_suite().
        add(BOOST_TEST_CASE( &test_power));
    return 0;
}
