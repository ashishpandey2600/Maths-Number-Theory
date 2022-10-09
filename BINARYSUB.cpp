//BINARYSUB codechef
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;

		if(str[0]=='a' and str[1]=='a')
		{
			cout<<1<<endl;
		}
		else if(str[0]=='a' and str[1]=='b')
		{
			cout<<2<<endl;
		}
		else if(str[0]=='b' and str[1]=='b')
		{
			cout<<1<<endl;
		}
		else if(str[0]=='b' and str[2]=='a')
		{
			cout<<2<<endl;
		}

}

}