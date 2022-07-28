//Using Pointer

#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10;
    int b=20;
    int *p,*q;
    p = &a;
    q = &b;
    //clrscr();
    printf("value of a=%d\n",a);
    printf("value of p=%d\n",*p);
    printf("value of b=%d\n",b);
    printf("value of q=%d\n",*q);

    printf("value of p=%x\n",p);
    printf("value of q=%x\n",q);
    getch();
}
