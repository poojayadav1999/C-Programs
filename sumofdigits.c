//sum of digits of a number

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem=0;
    int sum=0;
    //clrscr();
    printf("Enter any number\n");
    scanf("%d",&num);

    while(num!=0)
    {
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }

    printf("sum = %d\n",sum);

}
