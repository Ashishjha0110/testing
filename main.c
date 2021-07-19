/*program to convert decimal to binary number*/

#include<stdio.h>


int main()
{
  int n,rem,a[10],i=0;
  scanf("%d",&n);
  while(n)
  {
    rem=n%2;
    n=n/2;
    a[i]=rem;
    i++;
  }

  for(int j= i-1;j>=0;j--)
  {
    printf("%d",a[j]);
  }


  return 0;
}
