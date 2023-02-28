#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// isDivisibleBy(n,d) tests
TEST_CASE("Tests for isDivisibleBy(n,j)") 
{
	// cases that should be true
	CHECK( isDivisibleby(100,25) == true);
	CHECK( isDivisibleby(9,3) == true);
	CHECK( isDivisibleby(35,17) == false);
	CHECK( isDivisibleby(3,2) == false);
    
}

TEST_CASE("Tests for isprime(int n)")
{
    CHECK( isprime(2) == true);
    CHECK( isprime(3) == true);
    CHECK( isprime(4) == false);
    CHECK( isprime(20) == false);
}

TEST_CASE("Tests for nextPrime(int n)"){
	CHECK( nextPrime(4) == 5);
	CHECK( nextPrime(5) == 7);
	CHECK( nextPrime(112) == 113);
}

TEST_CASE("Tests for countPrimes(int a, int b)")
{
	CHECK( countPrimes(2,7)== 4);
	CHECK( countPrimes(10,25)== 5);
}

TEST_CASE("Tests for isTwinPrime(int n)")
{
	CHECK( isTwinPrime(3)== true);
	CHECK( isTwinPrime(4)==false);
	CHECK( isTwinPrime(23)==false);
	CHECK( isTwinPrime(97)== false);
}

TEST_CASE("Tests for nextTwinPrime(int n)")
{
	CHECK( nextTwinPrime(3)==5);
	CHECK( nextTwinPrime(10)==11);
	CHECK( nextTwinPrime(23)==29);
}

TEST_CASE("Tests for largestTwinPrime(int a, int b)")
{
	CHECK( largestTwinPrime(5,17) == 17);
	CHECK( largestTwinPrime(10,23)==19);
}
