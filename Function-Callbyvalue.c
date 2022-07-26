//call by value

#include<stdio.h>
#include<conio.h>
void main()
{
   int var1 = 20;
   int var2 = 20;
   int var3 = add(var1,var2);
   printf("%d",var3);

}
 int add(int a,int b)
 {
     int c = a+b;
     return c;
 }
