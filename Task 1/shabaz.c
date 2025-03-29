#include<stdio.h>
void main()
{
  int sum=0,i,n;
  printf("Enter the value of n=");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  printf("The sum of number %d \n",sum);
}
