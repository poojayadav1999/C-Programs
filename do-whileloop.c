//Program to print 1 to 10 no using do-while loop

#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    //clrscr();
    printf("Print 1 to 10 numbers\n");

    do{

        printf("%d\n",i);
        i++;

      }while(i<=10);
    getch();
}

