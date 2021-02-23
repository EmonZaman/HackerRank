#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   scanf("%d",&n);
  // cout<<n<<endl;
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n-1;j++)
       {
           printf(" ");
       }
       for(int k=0;k<=i;k++)
       printf("#");
       printf("\n");
   }




}

