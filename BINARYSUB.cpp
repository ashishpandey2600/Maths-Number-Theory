//BINARYSUB
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e5+10;
ll arr[N];

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{

		string str;
		cin>>str;


		if(str[0]==str[1] and str[1]==str[2]) // aaa,bbb
		{
			cout<<1<<endl;
		}
		else if(str[0]=='a' and str[1]=='a' and str[2]=='b') // aab
		{
			cout<<2<<endl;
		}
		else if(str[0]=='a' and str[1]=='b' and str[2]=='b') // abb
		{
			cout<<2<<endl;
		}
		else if(str[0]=='b' and str[1]=='b' and str[2]=='a') // bba
		{
			cout<<2<<endl;
		}
		else if(str[0]=='b' and str[1]=='a' and str[2]=='a') // baa
		{
			cout<<2<<endl;
		}
		else if(str[0]=='b' and str[1]=='a' and str[2]=='b') // bab
		{
			cout<<2<<endl;
		}
		else if(str[0]==str[1]) // aa and bb
		{
			cout<<1<<endl;
		}
		else if(str[0]=='b' and str[1]=='a' ) // ba
		{
			cout<<2<<endl;
		}
		else if(str[0]=='a' and str[1]=='b') // ab
		{
			cout<<2<<endl;
		}


	}


}
