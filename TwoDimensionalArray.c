//Two Dimensional Array

#include<stdio.h>
#include<conio.h>
void main()
{
    int Arr[2][4] = {{11,12,13,14},{21,22,23,24}};
    //clrscr();
    for(int i=0; i<2; i++)
    {
       for(int j=0; j<4; j++)
       {
            printf("Arr[%d][%d]=%d\n",i,j,Arr[i][j]);

       }
    }
}
