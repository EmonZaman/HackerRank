#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   long long input,sum=0;
   for(int i=1;i<=n;i++)
   {scanf("%lld",&input);
   sum=sum+input;
   }
   printf("%lld\n",sum);




}

