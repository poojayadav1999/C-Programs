#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    int add,sub,mul,div;
    //clrscr();
    printf("Enter value of a and b\n");
    scanf("%d%d",&a,&b);
    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    printf("addition is %d & %d = %d\n",a,b,add);

    printf("Substraction is %d & %d = %d\n",a,b,sub);

    printf("multiplication is %d & %d = %d\n",a,b,mul);

    printf("division is %d & %d = %d\n",a,b,div);

    getch();
}
