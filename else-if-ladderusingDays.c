//Program of week day no. using else_if ladder

#include<stdio.h>
#include<conio.h>
void main()
{
   int number;
   //clrscr();
   printf("Enter number : \n");
   scanf("%d",&number);

   if(number==1)
   {
      printf("Today is Sunday");
   }
   else if(number==2)
   {
       printf("Today is Monday");
   }
   else if(number==3)
   {
       printf("Today is Tuesday");
   }
   else if(number==4)
   {
       printf("Today is Wednesday");
   }
   else if(number==5)
   {
       printf("Today is Thursday");
   }
   else if(number==6)
   {
       printf("Today is Friday");
   }
   else if(number==7)
   {
       printf("Today is Saturday");
   }
   else
   {
        printf("no any day");
   }


}

