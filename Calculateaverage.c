#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    int avg;
    //clrscr();
    printf("Enter values of a,b,c,d\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    avg = a+b+c+d/4;
    //avg = sum/4;
    //printf("Average is: %d");
    printf("average is = %d",a,b,c,d,avg);
    scanf("%d",avg);
    getch();
}
