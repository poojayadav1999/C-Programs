//call by reference

#include<stdio.h>
#include<conio.h>
void main()
{

    int a=10,b=20;
    //clrscr();
    printf("Before swapping a=%d ,b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping a=%d,b=%d",a,b);
}
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
