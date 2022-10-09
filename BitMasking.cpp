//Bit Masking
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e5+10;
ll arr[N];

//Bit Msk has limitation of
// unsigned int - 32 - not more then 32 bits
// unsigned long long - 64 -  not more then 64 bits

//Question :- https://codeforces.com/blog/entry/73558
int main()
{
	int n;
	cin>>n;
	vector<int> masks(n,0);
	for(int i=0;i<n;++i)
	{
		int num_workers;
		cin>>num_workers;
		int mask=0;
		for(int j=0;j<num_workers;++j)
		{
			int day;
			cin>>day;
			mask =(mask | (1<<day)); 
		}
		masks[i]=mask;
	}
	int max_days = 0;
	int person1=-1;
	int person2=-1;
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j){
			int intersection = (masks[i] & masks[j]);
			int common_days = __builtin_popcount(intersection);
			if(common_days>max_days)
			{
				max_days=common_days;
				person2=j;
				person1=i;
			}
			


		}
	}
	cout<<person1<<" "<<person2<<" " << max_days<<endl;
     // O(N^2 )
}
