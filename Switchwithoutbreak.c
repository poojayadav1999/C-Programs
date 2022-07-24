//Program to study of switch without break statement

#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter number between 1 to 3\n");
    scanf("%d",&n);
    switch(n)
    {
      case 1:
             printf("You have entered 1\n");
      case 2:
             printf("You have entered 2\n");
      case 3:
             printf("You have entered 3\n");
      default :
             printf("out of range\n");
    }
    getch();
}
