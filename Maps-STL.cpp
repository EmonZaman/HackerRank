
#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main()
{
    int n,value,type;
    scanf("%d",&n);

    while(n--)
    {
        cin>>type;
        string s;
        cin>>s;
        if(type==1)
        {
            cin>>value;
            m[s]+=value;
        }
        else if(type==2)
        {
            m.erase(s);
        }
        else
            cout<<m[s]<<endl;



    }
    return 0;
}



