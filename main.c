/*program to sum first n numbers in O(n) then O(1) */

#include<stdio.h>

int main()
{
  int num,sum=0;
  
  printf("Enter the last natural nuumber:");
  scanf("%d",&num);
 //sum= 1+2+3+.............n
 for(int i=1;i<=num;i++)
 {
   sum= (num*num+num)/2;//time complexity O(1)
  
 }
  printf("The sum of %d natural number:%d\n",num,sum);  
  return 0;
}
