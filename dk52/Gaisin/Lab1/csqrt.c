//program when will calculate sqrt 
#include <stdio.h>
#include <math.h>

#include "csqrt.h"

int docsqrt(int B, int C)
{ 
//	int b, c, pt;
//	printf("calculate csqrt\n");
//	printf("enter b, c\n");
//	scanf("%i" "%i", &b, &c);
//	pt = b + c; /*created in order to not cout twice*/
//	if((b == 0) || (pt < 0)) /*protect from fool*/
//	{
//		printf("error, sorry...\nplease try again\n");
//		return 0;
//	}	
//	else 
//	{
//		printf("csqrt = %f \n", sqrt(pt) / b);/*count sqrt in "printf"*/
//		return sqrt(pt) / b;/*return value*/
//	}

//	return (( B+C ) > 0) ? sqrt(B+C) : 0;
	
	int theSum = B+C;
	int theResult = 0;
	
	if (theSum > 0)
	{
		theResult = sqrt(theSum);
	}
	
	return theResult;
}
