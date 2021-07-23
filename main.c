/*program to print *
                  ***
                 ***** */

#include<stdio.h>

int main()
{
   int i, j,rows;
   rows=5;
   for(i=0;i<rows;i++)
   {
     for(j=0;j<2*rows;j++)
     {
     if(j<rows-i-1 && j>rows-i+1)
     {
       printf("*");
     }
     else 
     {
       printf(" ");
     }
     }
     printf("\n");
   }
}