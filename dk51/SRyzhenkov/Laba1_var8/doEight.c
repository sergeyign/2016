//  doEight.c
//  Laba. 1 var. 8
//
//  Created by Ryzhenkov Serhii on 08/03/16.
//  Copyright � 2016 Ryzhenkov Serhii. All rights reserved.

 #include "doEight.h"

 int doEight()
 {
    int result, iter = 0;
    int output[100];    //������� � �������� ������ ��� ������ ������ �� �������
    int i;
    printf("Enter the number: ");
    scanf("%d", &result);

    //���� ��� ���������� ������������ ��� ������
    while(result>=8){                   //���� �����, ������� ���� ������������, ������� �� 8, ���� ����������
        output[iter] = result%8;        //������ ������ �� ������� � ������
        result /= 8;
        iter++;
    }
    output[iter] = result;              //���������� � ������ ��������� �����, ��� ������� �� ����� �� �����
    for(i = iter; i>=0; i--)            //���� ��� ������ ������ ������� � �������� ������������������
    {
        printf("%d", output[i]);
    }
 }
