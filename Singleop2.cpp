//SINGLEOP2 codechef
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
		int k=1;
		bool b=false;
		for(int i=0;i<=n;i++)
		{ //cout<<"-"<<i<<"-"<<endl;
			if(str[i]=='1' and b==false)
		{
			// cout<<ct<<"of1"<<endl;
			ct++;
			b=true;
			
		}
		else if(str[i]=='0' and b==true)
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