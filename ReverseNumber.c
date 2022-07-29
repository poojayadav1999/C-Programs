//Program of Reverse Number

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem;
    int reverse=0;
    //clrscr();
    printf("Enter any number to reverse\n");
    scanf("%d",&num);

    while(num>1)
    {
        rem = num%10;
        reverse = reverse*10+rem;
        num = num/10;
    }
    printf("Number is in reverse = %d",reverse);

}
