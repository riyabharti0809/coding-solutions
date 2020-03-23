# coding-solutions
hackerearth coding solutions

Unlock the Door- Maths - Medium

#include<stdio.h>
int main()
{
int i,n,k,t;
long long int p=1;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d %d",&n,&k);
if(n==1)
{
printf("%d\n",k);
}
else
{
for(int i=0;i<n;i++)
{
p=p*k;
p=p%1000000007;
k-=1;
}
p%=1000000007;
printf("%lld\n",p);

}
p=1;
}
}

