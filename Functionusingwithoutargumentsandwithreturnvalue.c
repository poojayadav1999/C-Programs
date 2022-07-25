//Program for function without arguments and with return value

#include<stdio.h>
#include<conio.h>
void main()
{
    int sum();
    //clrscr();
    int c;
    c = sum();
    printf("sum is : %d",c);
    getch();
}
int sum()
{
    int a,b,c;
    printf("Enter value of a and b\n");
    scanf("%d%d",&a,&b);
    c = a+b;
    return c;
}
