#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    stack<int>st;
    while(n--)
    {
      int t;
      ll x;
      cin>>t;
      if(t==1){
          cin>>x;
          st.push(x);
      }
      else if(t==2) st.pop();
      else cout << st.top() << endl;
    }
    return 0;
}

