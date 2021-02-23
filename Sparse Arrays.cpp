#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string s[n];
   for(int i=0;i<n;i++)
   {
       cin>>s[i];
   }
   int n1;
   cin>>n1;
   string s1[n1];
   for(int i=0;i<n1;i++)
   {
       cin>>s1[i];

   }
   for(int i=0;i<n1;i++)
   {
       int c=0;
       for(int j=0;j<n;j++)
       {
           if(s1[i]==s[j])
           {
               c++;
           }
       }
       cout<<c<<endl;
   }






}

