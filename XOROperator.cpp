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
