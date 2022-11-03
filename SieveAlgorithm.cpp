#include<bits/stdc++.h>
using namespace std;
//Sieve ALgorithm;
const int N = 1e7+10;
vector<int> isPrime(N,1);// In starting all number are prime.

int main()
{ bool isPrime[0]=isPrime[1]=false;
	for(int i=2;i<N;++i)
	{
		if(isPrime[i]==true){
			for(int j=2*i;j<N;j+=i){
				isPrime[j]=false;
			}
		}
	}
// N=log(log(N))
 int q;
 cin>>q;
 while(q--){
 	int num;
 	cin>> num;
 	if(isPrime[num]){
 		cout<<"prime\n";
 	}else {
 		cout<<"not prime\n";
 	}
 }
}