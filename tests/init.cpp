#include <iter.hpp>
#include <catch.hpp>
SCENARIO("NULL")
{
	int a[10] = { 1, 5, 6, 9 ,7, 2, 0 ,4, 5, 7 }
		int b[10] = { 9, 7, 7, 6, 5 ,5,  4, 2, 1, 0 }
	for (i; i < 10; i++)
	{
		REQUIRE(a[i] == b[i]);
	}

}