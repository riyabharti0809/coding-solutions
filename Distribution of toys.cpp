
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int c=0,mm,m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i-1;j++)
        {
            int k=n-i-j;
         
                    mm=max(i,j);
                    m=max(mm,k);
                    if((i==m && j!=m && k!=m)||(i!=m && j==m && k!=m)||(i!=m && j!=m && k==m))
                    {c++;}
                
            
        }
    }
    return c;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        cout<<count(a)<<endl;
    }
}
