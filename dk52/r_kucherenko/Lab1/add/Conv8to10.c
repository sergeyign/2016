//
//  Conv8to10.c
//  add_to_lab1
//
//  Created by Ruslan Kucherenko on 10/03/16.
//  Copyright (C) 2016 Ruslan Kucherenko. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main()
{
	int val;
	char oct_val[20];
	printf("Enter the number:\n");
	gets(oct_val);
	val = oct_to_dec(oct_val);
	printf("%d\n",val);
	return 0;
}

int oct_to_dec(char* oct){
	int sum = 0;
	int i;
	for(i =0;i<strlen(oct);i++){
		sum = sum*8+oct[i]-'0';
	}
	return sum;
}
