#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <list>


//������� ������� ��� ������ ������
void Print(mylist *b)
{
    mylist *print = b;
    while(print)
    {
        printf('%d', print->a.key, "->");
        print = print->next;
    }
    printf("NULL\n");
}


//������� ���������� � ����������
  int main()
  {
      //����������
  srand(time(0));
    int n, tmp;
    int *begin, *end;//��������� �� ������ � ����� ������
    list<int> mylist; //������� ������
      for (int i = 0; i < 10; i++)
      {
          scanf("%d", &n);

          //��������� ������ ���������� �� 1 �� 10 ������������
          mylist.push_back(n);
      }
        int k = 0;
        for int i= 0; i<10; i++)
        {
            if(mylist->begin < mylist->next) k=i+1;
        }
      //����������
       for (int i = 0; i <k ; i++)
      {
          for (int j = 0; j < k; j++)
          {
              if(mylist->begin < mylist->next)//���� ����������� ������ �����������

                  //������ ������� �������� ������������ �� ��������
              {
                tmp = mylist->next;
                mylist->begin = mylist->next;
                mylist->begin =tmp;
              }
          }
      }

      printf("����� ������");

      Print(begin);
      _getch();
      return 0;
  }
