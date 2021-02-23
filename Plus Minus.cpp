#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int c=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {scanf("%d",&a[i]);
    if(a[i]>0)
    c++;
    else if (a[i]<0)
    c1++;
    else
    c2++;


    }
    //if(c!=0)
   // {
       float ans;
      ans=(float)c/n;
     printf("%lf\n",ans);
   // }
  //  if(c1!=0)
   // {
      ans=(float)c1/n;
     printf("%lf\n",ans);
   // }
   // if(c2!=0)
   // {
      ans=(float)c2/n;
     printf("%lf\n",ans);
   // }

}

