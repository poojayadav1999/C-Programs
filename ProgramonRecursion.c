//Recursion

#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    //clrscr();
    printf("Enter any number\n");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));
}
int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return(n*factorial(n-1));
    }
}
