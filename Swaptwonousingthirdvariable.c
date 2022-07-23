#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b;
    int c;
    //clrscr();
    printf("Enter value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c;

    printf("After swapping a=%d b=%d",a,b);

    getch();

}
