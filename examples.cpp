#include<fstream>
#include<iostream>
using namespace std;
int main()
{ int a,b,c;
	ifstream a_stream;
	ofstream o_stream;
	a_stream.open("abc.txt");
		o_stream.open("result.txt");
	a_stream>>a>>b;
	c=a+b;
	o_stream<<c;
 
	
	
	
}
