//Program for function with arguments and without return value

#include<stdio.h>
#include<conio.h>
void main()
{
    void sum(int,int);
    int a,b;
    //clrscr();
    printf("Enter values of a and b\n");
    scanf("%d%d",&a,&b);
    sum(a,b);
    getch();
}
void sum(int a,int b)
{
    int c;
    c=a+b;
    printf("sum is : %d",c);

}
