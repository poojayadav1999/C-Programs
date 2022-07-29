//Program to find Factorial number

#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    int fact=1;
    //clrscr();
    printf("Enter any number\n");
    scanf("%d",&num);

    for(int i=num; i>=1; i--)
    {
        fact = fact*i;
    }
    printf("Factorial number is: %d",fact);
}
