#include<bits/stdc++.h>
using namespace std;
#define floop(i,a,b) for(i=a;i<b;i++)
#define ll long long int

int main()
{
int t;cin>>t;
while(t--){
ll i,q,k;cin>>q>>k;
ll n=q/2;ll a[q];
floop(i,0,q)cin>>a[i];
sort(a,a+q);
ll sum[n],j=0;
floop(i,0,q)sum[j++]=a[i]+a[q-1-i];
sort(sum,sum+n);
ll s=sum[n-1]-sum[0];
if(k==s)
{
cout<<s<<endl;
cout<<"Lucky chap!"<<endl;
}
else if(k>s)
{
cout<<s<<endl;
cout<<"Chick magnet Jhool!"<<endl;
}
else if(k<s)
{
cout<<s<<endl;
cout<<"No more girlfriends!"<<endl;
}
}
}
