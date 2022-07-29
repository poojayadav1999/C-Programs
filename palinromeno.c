#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem;
    int sum=0;

    //clrscr();
    printf("Enter any number\n");
    scanf("%d",&num);
     int x = num;

    while(num>0)
    {
        rem = num%10;
        sum = (sum*10)+rem;
        num = num/10;
    }
    if(x == sum)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
}
