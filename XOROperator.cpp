#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Swap operator using Xor Operater

	int a=9,b=0;

	a=a^b;
	b=b^a;
	a=a^b;
	cout<<a<<b<<endl;

	// x ^ x=0
	// x ^ 0= x

	// b = b ^ (a ^ b) ==> b^b^a 
	// Xor is associative
	//x ^ y ^ z == x ^ z ^ y == y ^ x ^z

}
1  23456789 10
2  23456789 10
3  23456789 10
4  23456789 10
5  23456789 10
6  23456789 10
7  23456789 10
8  23456789 10
9  23456789 10
10 23456789 10