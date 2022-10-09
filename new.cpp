//Binary Exponentiation
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e5+10;
const int M=998244353;
ll arr[N];


int binExpRecur(int a,int b){
	if(b==0)return 1;
	int res = binExpRecur(a,b/2);
	if(b&1){
		return (a * ((res* 1LL * res)%M))%M;

	}else{
		return (res*1LL*res)%M;
	}
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
	cout<<binExpRecur(a,b)<<endl;
}

}
