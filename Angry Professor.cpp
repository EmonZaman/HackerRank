#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int total=0;
       int n,k;
       scanf("%d%d", &n, &k);
       int a[100000];
       for(int i=0;i<n;i++ )
       {
           scanf("%d",&a[i]);
           if(a[i]<=0)
           total++;
       }
        if(total>=k)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}

