//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
const ll N=1e5+10;
ll arr[N];

lli func(lli mod,set<string>& s,string curr,map<string,string>& m,vector<int >& v,string& str,int index) 
{
	if(index < 0){
		auto it = s.find(curr);
		if(it == s.end())
		{
			s.insert(curr);
			return 1;
		}
		return 0;
	}
	if(v[index]!=-1) return v[index];

	lli t1=func(mod,s,m[str.substr(index,1)+curr],m,v,str,index-1);
	lli t2 = 0;
	if(index -1 >= 0 && m.find(str.substr(index-1,2)) != m.end())
		t2=func(mod,s,m[str.substr(index-1,2)+curr],m,v,str,index-2);
	return v[index]= (t1+t2)%mod;
}
int main()
{
	lli t;
	cin>>t;
	while(t--)
	{
		lli k=998244353;
		string str;
		cin>>str;
		lli n = str.length();
		vector<int> v(n,-1);
		set<string> s;
		map<string,string> m{{"a", "01"}, {"b",  "10"}, {"ab" , "010"}, {"ba" , "101"}};
		cout<<func(k,s,"",m,v,str,n-1)<<endl;
	}

}
