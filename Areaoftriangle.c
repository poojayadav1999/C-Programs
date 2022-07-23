#include<stdio.h>
#include<conio.h>
void main()
{

    float base,height;
    float area;
    //clrscr();
    printf("Enter base and height : \n");
    scanf("%f%f",&base,&height);

    area = 0.5*base*height;

    printf("Area of triangle is : %f",area);

    getch();

}
