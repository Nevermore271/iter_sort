#include <iter.hpp>
#include <catch.hpp>
SCENARIO("NULL")
{
	int a[10] = { 1, 5, 6, 9 ,7, 2, 0 ,4, 5, 7 };
	int b[10] = { 9, 7, 7, 6, 5 ,5,  4, 2, 1, 0 };
	ItSort(&a[0], &a[11]);
	for (int i=0; i < 10; i++)
	{
		REQUIRE(a[i] == b[i]);
	}

}
