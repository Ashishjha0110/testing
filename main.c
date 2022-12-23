#include <stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=5;i++) // Number of rows 
    {
      for(j=i;j<5;j++) // numbers of required spaces 
        {
          printf(" ");
        }
      for(k=1;k<=i;k++) // getting the required number of *
        {
          printf("*");
        }
    printf("\n");
 }
}