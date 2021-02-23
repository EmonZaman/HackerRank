#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
scanf("%d",&n);
int a[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
int f1=0,f2=0,l1=n-1,l2=0,sum1=0,sum2=0;
for(int i=1;i<=n;i++)
{
    sum1=sum1+a[f1][l1];
    sum2=sum2+a[f2][l2];
    f1++;
    f2++;
    l1--;
    l2++;

}
  int ans=abs(sum1-sum2);
  printf("%d\n",ans);


}

