#include<stdio.h>
#include<conio.h>
void main()
{

    int n;
    //clrscr();
    printf("Enter value of n\n");
    scanf("%d",&n);
    if(n>0)
    {
         //printf("%d is negative\n",n);
        if(n%2==0)
        {
            printf("Number is Even :%d",n);
        }
        else
        {
            printf("Number is Odd :%d",n);
        }
    }
    else
    {
        printf("%d is negative",n);
    }

}
