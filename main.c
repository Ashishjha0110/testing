/*program to print multiplication table*/

#include<stdio.h>

int main()
{
  int num,result;
  
  printf("Enter the nuumber:");
  scanf("%d",&num);
  
  for(int i=1;i<=10;i++)
  {
    result=num*i;
    printf("%dx%d=%d\n",num,i,result);
  }
  
  
  return 0;
}
