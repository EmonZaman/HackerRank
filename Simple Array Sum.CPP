#include<stdio.h>
int main()
{
  int n;
  int a[1001],sum=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      sum=sum+a[i];
  }
  printf("%d\n",sum);

}

