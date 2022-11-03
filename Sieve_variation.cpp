#include<bits/stdc++.h>
using namespace std;
//Sieve ALgorithm;
const int N = 1e7+10;
vector<int> isPrime(N,1);// In starting all number are prime.
vector<int> lp(N,0),hp(N,0);
int main()
{ is isPrime[0]=isPrime[1]=false;
	for(int i=2;i<N;++i)
	{
		if(isPrime[i]==true){
			lp[i]=hp[i]=i;
			for(int j=2*i;j<N;j+=i){
				isPrime[j]=false;
				hp[j]=i;
				if(lp[j]==0)
				{
					lp[j]=i;
				}

			}
		}
	}
// N=log(log(N))
	for(int i=1;i<100;++i){
		cout<<lp[i]<<" ">>hp[i]<<endl;

	} 
	int num;
	cin>>num;
	vector<int>prime_factors;
	int prime_factors = hp[num];

	while(num% prime_factors == 0){ //Log(N);
		prime_factors.push_back(prime_factors);
	}
	
	//Storing count of factor
	int num;
	cin>>num;
	map<int,int>prime_factors;
	while(num>1){
	int prime_factors = hp[num];

	while(num% prime_factors == 0){ //Log(N);
		num/=prime_factors;
		prime_factors[prime_factors]++;
	}

	for(auto factor: prime_factors){
		cout<< factor.first<<" "<<factor.second<<Endl;
	}
}
}