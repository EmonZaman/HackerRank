#include<stdio.h>
int main()
{
    int s=0,s1=0,n[3],n1[3];
  for (int i=0;i<3;i++)
  {scanf("%d",&n[i]);}
  for (int i=0;i<3;i++)
  {scanf("%d",&n1[i]);}
  for (int i=0;i<3;i++)
  {
      if(n[i]>n1[i])
      s++;
      else if(n[i]<n1[i])
      s1++;


  }
   printf("%d %d\n",s,s1);




}

