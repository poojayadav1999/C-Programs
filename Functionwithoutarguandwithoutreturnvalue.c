//Program for function without arguments and without return value

#include<stdio.h>
#include<conio.h>
void main()
{
    void sum();
    //clrscr();
    sum();
    getch();
}
void sum()
{
    int a,b,c;
    printf("Enter values of a and b\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is : %d",c);

}
