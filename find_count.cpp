//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e5+10;
ll arr[N];
/*

Given array a of n integers.All intergers
are present in event count except one.
Find the one integer which has odd count in 
O(N) time complexity and O(1) space;

N<10^5
a[i]<10^5

*/

int main()
{
	//Elinimate even element by XOR B^B =0;

	//a^b^c^B --> c^a^c^b^b

	int n;
	cin>>n;
	int x;
	int ans=0;
	for(int i=0;i<n;++i)
	{
		cin>>x;
		ans ^=x;
	}

	cout<<ans<<endl;
	
}
