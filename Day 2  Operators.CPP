#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    int b,c;
    cin>>a>>b>>c;
    double temp;
    temp=a*(double)((b+0.0)/100);
    temp+=a*(double)((c+0.0)/100);
    temp+=a;
    int ans=round(temp);
    cout<<ans<<endl;


}

