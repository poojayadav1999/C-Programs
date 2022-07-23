#include<stdio.h>
#include<conio.h>
void main()
{

    int length,breadth;
    int area;
    //clrscr();
    printf("Enter length and breadth : \n");
    scanf("%d%d",&length,&breadth);

    area = length*breadth;

    printf("Area of Rectangle is : %d",area);

    getch();

}

