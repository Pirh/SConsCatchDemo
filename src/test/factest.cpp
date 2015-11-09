#include "catch.hpp"

unsigned int fac(unsigned int n)
{
    return (n==0) ? 1 : n * fac(n-1);
}

TEST_CASE("fac(0) = 1", "[factorial]")
{
    REQUIRE(fac(0) == 1);
}

TEST_CASE("fac(1) = 1", "[factorial]")
{
    REQUIRE(fac(1) == 1);
}

TEST_CASE("fac(2) = 2", "[factorial]")
{
    REQUIRE(fac(2) == 2);
}

TEST_CASE("fac(3) = 6", "[factorial]")
{
    REQUIRE(fac(3) == 6);
}

TEST_CASE("fac(4) = 24", "[factorial]")
{
    REQUIRE(fac(4) == 24);
}