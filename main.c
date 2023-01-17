#include <stdio.h>
int main()
{
  int i,j,k;
  /*printf("Enter the number of rows:");
  scanf("%d",&rows);*/

  for(i=1;i<=5;i++)
    {
      for(j=1;j<i;j++)
        {
          printf(" ");
        }
      for (k=i;k<=5;k++)
        {
          printf("*");
        }
      printf("\n");
    }
}