//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
const ll N=1e5+10;
ll arr[N];
ll mod= 998244353;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a ,b;
		cin>>a>>b;
		lli k=0;
		int m=max(a,b);

		for(lli i=1;i<=m;++i)
		{

			for(lli j=1;j<=m;++j)
			{
				// cout<<"["<<i<<","<<j<<"]"<<",";
				k=(k+ (i%mod & j%mod)%mod);
				// cout<<k;
			}

		}
		cout<<k<<endl;
		// cout<<k<<endl;
		// {[1,1],[1,2],[2,1],[2,2]}.
		// [1,0,0,2]
		//[1,0,1,0,2,2,1,2,3].


	}


}
