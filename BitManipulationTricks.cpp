#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
	for(int i=10;i>=0;--i)
	{
		cout<<((num>>i)&1);
	}
	cout<<endl;
}

int main(){

	//Trick 1 : Even and Odd

	for(int i=0;i<8;++i)
	{
		printBinary(i);
		if(i&1){
			cout<<"ODD\n"<<endl;
		}
		else{
			cout<<"even\n"<<endl;
		}
	}//Faster then modulo operation
		//if(n%2==0)
	
	//Trick 3 : Divison

	int n=5;
	cout<<(n>>1)<<endl; //Divinded by 2  O/P- 2
	cout<<(n<<1)<<endl; // Multiply by 2  O/P- 10

	//(hi+lo)>>1 for binary search

	//101 -- >  (2^2*1 + 2^1 *0 +2^0+1)/2
	// 10 -- > (2^1 + 2^1 *0)
	// 1010 -- > (2^3*1 + 2^2 *0 + 2^1*1 + 2^0+1)/2

	//Trick 3: Uppercase to Lowercase and Vice versa converstion
	for( char c='A';c<='E';++c)
	{
		cout<<c<<endl;
		printBinary(int(c));
	}
	for( char c='a';c<='e';++c)
	{
		cout<<c<<endl;
		printBinary(int(c));
	}
	// Lower case 5th bit is set while in Upper case its unset.

	//So to convert small a to capitale a we have to only unset the bit.
	// to convert 'A ' to 'a' , we have to Only set the bit.


	//capital A to small a
	char A ='A';
	char a = A | (1<<5);
	cout<<a<<endl;

	//small a to capital A
	cout<<char(a&(~(1<<5)))<<endl;

	cout<<char(1<<5)<<endl;//32 : print space,ASCII Value of space

	//Binary of UnderScore
	printBinary('_');


	//1. If we do 'C'(caplital letter) OR operation with space(' ') we get 'c' lower case letter.
	cout<<char('C'|' ')<<endl; // Converstion of C to c


	//2. If we AND and lower case letter with underscore we get lower case letter
	cout<<char('z'&'_')<<endl; //Converstion of z to Z

	//Trick 4: clear LSB's

	printBinary(59); //clear LSB till 4 bit in single operatioin
	// We will need a number which have zero till 4 bits.
	//00000111011
	//11111100000  (a) <- need this to clear all
	//00000011111  (b) <- Inversion of (a)

	//00000010000 - 1 = (b)
	int aa=59;
	int i=4; // 0 se 4 tak bits clear krni h yani 5 bits
	int b=(aa & (~((1<<(i+1))-1)));
	printBinary(b);


	//Trick 5 : clear MSB's

	int cc= (a&((1<<(i+1))-1));
	printBinary(cc);

	//Check power if 2

	int N=15;

	if(N&(N-1))
	{
		cout<<"NOT power of 2";
	}
	else
		cout<<"Power of 2";








}