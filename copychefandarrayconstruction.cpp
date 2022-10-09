//copy chef and array construction
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
const ll N=1e5+10;
ll arr[N];
int n,m,s;

lli pow(ll b,ll n)
{
	lli k=998244353;
	ll ss=1;
	while(n){
		if(n%2==1)s=s*b%k;
		b=b*b%k;
		n=n/2;
	}
	return s;
}
ll count(int i,int j)
{
	return((i/(1<<(j+1)))<<j)+(max(011,i%(1<<(j+1))-(1<<j)+1));
}

signed main()
{
	int t;
	cin>>t;
	lli k=998244353;
	while(t--){
	cin>>n>>m;s=0;
	for(int i=0;i<31;++i)
	{
		ll p=pow(count(m,i),n);
	
		s=(s+p<<i)%k;
		cout<<s<<endl;
	}
}

}
