#include<stdio.h>
int main()
{
  int n;
  int a[100000];
  scanf("%d",&n);
  int check=-11111;
  for(int i=0;i<n;i++)
  {

      scanf("%d",&a[i]);
      if(a[i]>check)
      check=a[i];
  }
  int sum=0;
  for(int i=0;i<n;i++)
  {
      if(a[i]==check)
      sum++;

  }
  printf("%d\n",sum);


}

