//  Source.c
//  Laba. 2 var. 13
//
//  Created by Ryzhenkov Serhii on 30/03/16.
//  Copyright � 2016 Ryzhenkov Serhii. All rights reserved.

#include <stdio.h>
#include <stdlib.h>
#include "Myfunction.h"
#include "List.h"

int main(int argc, const char * argv[])   //��������� ���������
{	
	int count;
	if (1 == argc)						// ���� �������� �� ����������� ����������
	{
		printf("Error");
		return 0;
	}

	IntList *theList = Create_L();		// ������� ������ 

	for (int i = 1; i < argc; i++)				// ���� ��� �������� ���, �� ����������� ��������� ���������� 
	{
		IntNode *theNode = CreateNode(atoi(argv[i]));	//atoi ��������� char � int
		AddNode(theList, theNode);
		printf("Node: %d\n", theNode->value);
	}

	printf("List: \n");			// ����� ������
	PrintList(theList);

	distribution(theList);		// ������� ��� ����������
	//UpdatedValue(theList);
	count = CountList(theList);
	bubbleSort(theList, count);

	system("pause");
}

