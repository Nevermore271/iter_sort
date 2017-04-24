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
SCENARIO("NULL")
{
	int a[3][3] =     {{1,2,3},
                  	  {4,5,6},
                    	  {7,8,9}};
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
			ItSort(&a[i][0], &a[i][4]);
	}
	REQUIRE(a[0][0] == 3); 
	REQUIRE(a[0][1] == 2);
	REQUIRE(a[0][2] == 1);
	REQUIRE(a[1][0] == 6);
	REQUIRE(a[1][1] == 5); 
	REQUIRE(a[1][2] == 4);
	REQUIRE(a[2][0] == 9); 
	REQUIRE(a[1][1] == 8); 
	REQUIRE(a[2][2] == 7);
}
