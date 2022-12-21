#include <stdio.h>
int main()
{
  int i,j,rows; //decalring the variable
  printf("Please state the number of rows: ");
  scanf("%d",&rows); // Reading the row data
  for(i=1;i<= rows;i++)
    {
      for(j=1;j<=i;j++)
        {
      printf("* ");
        }
      printf("\n");
    }
  return 0;

  }