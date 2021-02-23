#include<bits/stdc++.h>
using namespace std;


bool check(string a, string b)
{
    return a.length() == b.length() ? a > b : a.length() > b.length();
}

int main()
{
    int n;
    cin>>n;
    vector<string>vec;
    string in;
    for(int i=0; i<n; i++)
    {
        cin>>in;
        vec.push_back(in);
    }
    sort(vec.begin(),vec.end(),check);
    for(int i=n-1; i>=0; i--)
    {
        cout<<vec[i]<<endl;;
    }

}

