/*program to find the largest number in a array*/

#include<stdio.h>
//function to check the largest number 
int maxnum(int ar[],int n)
{
  int max=0;
  for(int check=0;check<n;check++)
  {
    if(ar[check]>max)
    {
    max=ar[check];
    }
  }
  return max;
}

int main()
{
  int arr[]={1,2,3,45,564,3446,797};
  int max = maxnum(arr,7);//calling the function here
  printf("The max number in the array is %d",max); 
  return 0;
}
