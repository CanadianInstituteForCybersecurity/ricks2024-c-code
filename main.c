#include<stdio.h>
#include "arithmetic.h"

/*int add (int x, int y )
{
	return x+y;
}*/

/*int mul (int x, int y )
{
	return x+y;
}*/

int main()
{
	int x, y, z;
	x = 6;
	y = 7;

	//z = sum(6, 7);
	//z = add(6, 7);
	z = mul(x, y);

	printf("Result = %d\n", z);
}
