#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,n,k,i,j,p,ans,count,room,ii,l;
	string s;
	cin >> t;
	while(t--)
	{
	    cin >> n >> k;
	    vector<string> v[n];
	    map<string,bool> mp1;
	    count=0;
	    for(i=0;i<n;i++)
	    {
	        cin >>p;
	        for(j=0;j<p;j++)
	        {
	            cin >> s;
	            v[i].push_back(s);
	            if(!(mp1[s]))
	            {
	                mp1[s]=true;
	                count++;
	            }
	        }
	        
	    }
	    if(count<k)
	        cout << -1 << endl;
	   else
	   {
	       ans=INT_MAX;
	       for(i=0;i<(1<<n);i++)
	       {
	           map<string,bool> mp2;
	           count=0;
	           room=0;
	           for(j=0;j<n;j++)
	           {
	               if(i&(1<<j))
	               {
	                   room++;
	                   for(ii=0;ii<v[j].size();ii++)
	                   {
	                       if(!(mp2[v[j][ii]]))
	                       {
	                           count++;
	                           mp2[v[j][ii]]=true;
	                       }
	                   }
	               }
	           }
	           
	           if(count>=k)
	                ans=min(ans,room);
	       }
	       cout << ans << endl;
	   }
	   
 
	}
 
	return 0;
}
