//Program for function with arguments and with return value

#include<stdio.h>
#include<conio.h>
void main()
{
    int sum(int,int);
    int a,b,c;
    //clrscr();
    printf("Enter value of a and b\n");
    scanf("%d%d",&a,&b);
    c = sum(a,b);
    printf("sum is : %d",c);
    getch();
}
 int sum(int a,int b)
 {
     int c;
     c = a+b;
     return c;
 }

