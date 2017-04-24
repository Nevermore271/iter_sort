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
SCENARIO("NULL1")
{
	a[0][0] = 1; a[0][1] = 2; a[0][2] = 3;
	a[1][0] = 4; a[1][1] = 5; a[1][2] = 6;
	a[2][0] = 7; a[2][1] = 8; a[2][2] = 9;
	
		
			ItSort(&a[0][0], &a[3][3]);
	
	REQUIRE(a[0][0] == 9); 
	REQUIRE(a[0][1] == 8);
	REQUIRE(a[0][2] == 7);
	REQUIRE(a[1][0] == 6);
	REQUIRE(a[1][1] == 5); 
	REQUIRE(a[1][2] == 4);
	REQUIRE(a[2][0] == 3); 
	REQUIRE(a[2][1] == 2); 
	REQUIRE(a[2][2] == 1);
}
