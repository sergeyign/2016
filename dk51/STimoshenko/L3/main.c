#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Simplesort.h"


#define ARRAY_SIZE(a) (sizeof(theArray)/sizeof(theArray[0]))
#define ArraySize 20000
static void printArray(int anArray[], int aSize);
static void fillArray(int anArray[], int aSize, int aPivot);
int main(int argc, const char * argv[])
{
		int theArray[ArraySize];
		int Number;
		int theArray1[ArraySize];
		int theArray2[ArraySize];
		int theArray3[ArraySize];
		int theArray4[ArraySize];
		int theArray5[ArraySize];
	srand(time(NULL));
	for (Number = 0; Number < ArraySize; Number++)
	{
		theArray[Number] = 0 + rand() % ArraySize;
		theArray1[Number] = theArray[Number];
		theArray2[Number] = theArray[Number];
		theArray3[Number] = theArray[Number];
		theArray4[Number] = theArray[Number];
		theArray5[Number] = theArray[Number];
	}

	printf("Wait, until program test the bubble sorting...");
	printf("Done\n");
	clock_t theStart1 = clock();
	bubbleSort(theArray1, ARRAY_SIZE(theArray1));
	clock_t theEnd1 = clock();

// The bubble sorting //

	printf("Wait, until program test the selection sorting...");
	printf("Done\n");

	clock_t theStart2 = clock();
	selectionSort(theArray2, ARRAY_SIZE(theArray2));
	clock_t theEnd2 = clock();

// The selection sorting //

	printf("Wait, until program test the insertion sorting...");
	printf("Done\n\n");

	clock_t theStart3 = clock();
	insertionSort(theArray3, ARRAY_SIZE(theArray3));
	clock_t theEnd3 = clock();

// The insertion sorting //

	






	printf("It's done:\n");
	printf("Time of bubble sorting: %.10f\n", (double)(theEnd1 - theStart1) / CLOCKS_PER_SEC);
	printf("Time of selection sorting: %.10f\n", (double)(theEnd2 - theStart2) / CLOCKS_PER_SEC);
	printf("Time of insertion sorting: %.10f\n", (double)(theEnd3 - theStart3) / CLOCKS_PER_SEC);
	

	system("pause");
}







