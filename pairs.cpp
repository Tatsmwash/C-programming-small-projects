#include <iostream>
using namespace std;
class Pairs
{
	public:
		Pairs();
		Pairs(int a,int b);
		friend istream& operator>>(istream& ins,Pairs& second);
		friend ostream& operator<<(ostream& outs,const Pairs& second);
		
	private:
	int f;
	int s;
	
	
	
};
int main(){
	
	
    Pair<int, int> a(3, 4);
    cout << a;      

	 
	
	
	
}
istream& operator>>(istream& ins,Pairs& second){
	
	char p;
	ins>>p;
	ins>>second.f;
	ins>>p;
	ins>>second.s;
	ins>>p;
	return ins;
	
}
ostream& operator<<(ostream& outs ,const Pairs& second){
	outs<<'(';
	outs<<second.f;
	outs<<',';
	outs<<')';
	return outs;
	
	
	
	
}

