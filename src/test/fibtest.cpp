#include "catch.hpp"

unsigned int fib(unsigned int n)
{
    return (n < 2) ? n : fib(n-1) + fib(n-2);
}

TEST_CASE("fib(0) = 0", "[fibonacci]")
{
    REQUIRE(fib(0) == 0);
}

TEST_CASE("fib(1) = 1", "[fibonacci]")
{
    REQUIRE(fib(1) == 1);
}

TEST_CASE("fib(2) = 1", "[fibonacci]")
{
    REQUIRE(fib(2) == 1);
}

TEST_CASE("fib(3) = 2", "[fibonacci]")
{
    REQUIRE(fib(3) == 2);
}

TEST_CASE("fib(4) = 3", "[fibonacci]")
{
    REQUIRE(fib(4) == 3);
}

TEST_CASE("fib(5) = 5", "[fibonacci]")
{
    REQUIRE(fib(5) == 5);
}

TEST_CASE("fib(6) = 8", "[fibonacci]")
{
    REQUIRE(fib(6) == 8);
}