//Program to find maximum number within three numbers using else-if ladder

#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,n3;
    //clrscr();
    printf("Enter value of n1,n2,n3\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    if((n1>n2)&&(n1>n3))
    {
        printf("n1 is greater : %d",n1);
    }
    else if((n2>n1)&&(n2>n3))
    {
        printf("n2 is greater : %d",n2);
    }
    else
    {
        printf("n3 is greater : %d",n3);
    }
    getch();
}
