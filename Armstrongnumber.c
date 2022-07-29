//Program of Armstrong number

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem;
    int sum=0;

    //clrscr();
    printf("Enter any Number\n");
    scanf("%d",&num);
    int x=num;

    while(num>0)
    {
        rem = num%10;
        sum = sum+(rem*rem*rem);
        num = num/10;
    }

    if(x==sum)
    {
        printf("Number is Armstrong");
    }
    else
    {
         printf("Number is not Armstrong");
    }

}
