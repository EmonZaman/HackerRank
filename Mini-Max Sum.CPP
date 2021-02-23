#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6];
    int mini = INT_MAX, maxx = INT_MIN;
    long long int sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        sum+=a[i];
        mini=min(mini,a[i]);
        maxx=max(maxx,a[i]);
    }
    cout<<sum-maxx<<" "<<sum-mini<<endl;
}

