#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int main()
{
	cout<< INT_MAX <<endl;

	//Calculating power of 2.

	// 1 << n = 2^n

	//int a= ( 1 << 32 ) - 1; warning: left shift count >= width of type [-Wshift-count-overflow]

	int a = (1LL<<32) -1;
	cout<<a<<endl; //output :- -1
	
	int b = (1LL<<31) -1;
	cout<<b<<endl; 
	// int is Signed integer stores both negative and positive number
	// One bit is reserved to store sign of integer

	unsigned int c=(1LL<<32)-1; 
	//Unsigned int stores Only Positive no. No etc Bit for Sign of + and -.
	//So, It shows the output.
	cout<< c <<endl;
	

}