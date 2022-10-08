#include<bits/stdc++.h>
using namespace  std;

void printBinary(int num)
{
	for(int i=10;i>=0;--i)
	{
		cout<<((num>>i)&1);
	}
	cout<<endl;
}

int main()
{
	// set bit is when bit is one
	// unset = 0 set = 1
	printBinary(9);
	int a = 9;
	int i=1;
	if((a&(1<<i)) !=0 ){
		cout<<"Set bit";
	}
	else{
		cout<<"Not set bit";
	}
	//Bit set
	printBinary(a| (1<<3));

	//Tilda operator
	printBinary((1<<3)); //We use Tilde operator for Inversion

	//Bit Unset
	printBinary(a&(~(1<<3)));

	//Toggle , make 0 to 1 and 1 to 0

	printBinary(a ^ (1<<2));
	printBinary(a ^ (1<<3));

	//Bit count - no. of set bits

	int ct=0;
	for(int i=31;i>=0;--i)
	{
		if((a & (1<<i))!=0)
		{
			ct++;
		}
	}
	cout<<ct<<endl; // No. of 1 ; It counts only set bits

	cout<< __builtin_popcount(a)<<endl; // Inbuilt function to count set bits
	//count<< __built_popcount(1LL<<35)<<endl;//Only work for int not for Long Long
	cout<< __builtin_popcountll(1LL<<35)<<endl;//Use this for Long Long
	cout<< __builtin_popcountll((1LL<<33)-1)<<endl;//count of bits


	
}