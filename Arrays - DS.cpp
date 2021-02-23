
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int in;
        cin>>in;
        v.push_back(in);
        i++;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
        cout<<endl;

        return 0;




}
