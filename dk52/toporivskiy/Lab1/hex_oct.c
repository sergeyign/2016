//
//  hex_oct.c
//  Lab1
//
//  Created by Andrew Toporivskiy on 09/03/16 (DD/MM/YY).
//  Copyright (C) 2016 Andrew Toporivskiy. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 

#include "hex_oct.h"

void hex_oct()
{
	// Initialization
	int hex_oct_Number;

	// Translation from hexadecimal to octal and output on the screen
	printf("Enter hexadecimal number:\n");
	scanf("%x", &hex_oct_Number);
	printf("Octal equivalent of number is %o\n", hex_oct_Number);
	
	// Keeping the console open
	system("pause");
	printf("\n");
	printf("\n");
	main();
}
