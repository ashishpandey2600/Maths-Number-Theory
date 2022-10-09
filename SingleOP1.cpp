//SINGLEOP1 codechef
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n; int ct=0;
		cin>>n;
		string str;
		cin>>str;
		for(int i=0;i<=n;i++)
		{ //cout<<"-"<<i<<"-"<<endl;
			if(str[i]=='1')
		{
			ct++;
		}
		else{
			cout<<ct<<endl;
			break;
		}
		}
		
	}
}