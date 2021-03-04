#include "doctest.h"
#include "snowman.hpp"
#include <string>

using namespace std;
using namespace ariel;

TEST_CASE("Good snowman")
{
    CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(22222222) == string("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
    CHECK(snowman(33333333) == string("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
    CHECK(snowman(44444444) == string("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
    CHECK(snowman(12341234) == string("       \n _===_ \n (O.-)/\n<(> <) \n (   ) "));
    CHECK(snowman(21221243) == string("  ___  \n ..... \n (o,o)/\n<(   ) \n (___) "));
    CHECK(snowman(24232422) == string("  ___  \n ..... \n\\(o O) \n (] [) \n (\" \") "));
    CHECK(snowman(11112222) == string("       \n _===_ \n\\(.,.)/\n (] [) \n (\" \") "));
    CHECK(snowman(43243211) == string("  ___  \n (_*_) \n (o_-)/\n/( : ) \n ( : ) "));
    CHECK(snowman(33224442) == string("   _   \n  /_\\  \n (o_o)\n (   ) \n (\" \") "));
}

TEST_CASE("Bad snowman")
{
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(00000000)); //illegal
    CHECK_THROWS(snowman(1234230)); //illegal
    CHECK_THROWS(snowman(123412341234)); //too much digits
    CHECK_THROWS(snowman(111111111)); //too much digits
    CHECK_THROWS(snowman(1111111)); //too little digits
    CHECK_THROWS(snowman(-23454));
    CHECK_THROWS(snowman(-23232323));
    CHECK_THROWS(snowman(61231231));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(2));
    CHECK_THROWS(snowman(3));
    // CHECK_THROWS_AS(snowman(55555565), std::out_of_range);  // check that a specific exception type is thrown
    // CHECK_THROWS_AS(snowman(-2), std::exception);  // check that a specific exception type (or a descendant) is thrown
}
