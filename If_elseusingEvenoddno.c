#include<stdio.h>
#include<conio.h>
void main()
{

    int n1;
    //clrscr();
    printf("Enter value of n1\n");
    scanf("%d",&n1);

    if(n1%2==0)
    {
        printf("Number is even :%d",n1);
    }
    else
    {
       printf("Number is odd : %d",n1);
    }
}
