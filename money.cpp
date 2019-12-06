#include <iostream>
#include <cstdlib
#include<cctype>
using namespace std;
class Money{
	public:
		friend Money add(Money amount1,Money amount2);
		
		friend bool equal(Money amount1,Money amount2);
	
		Money (long dollars,int cents);
			Money (long dollars);
		Money();
		
		double get_value();
		void input (istream& ins);
			void output (ostream& outs);
		private:
			long all_cents;
	
	
};
int digit_to_int(char c);

int main ()
{
Money your_amount,my_amount(10,9),our_amount;
cout<<"Enter an amount of money:;
your_amount.input(cin);
cout<<"Your amount is";
your_amount.output(cout);
cout<<endl;
cout<< "My Account is";
my_account.output(cout);
cout<<endl;
if (equal(your_amount,my_account))	
	cout<< "We have the same amounts.\n";
	else
	cout<<"One of us is richer.\n;
	our_amount = add(your_amount,my_amount);
	your_amount.output(cout);
	cout<<"+";
	my_amount.output(cout);
	cout<<"equals";
	our_amount.output(cout);
	cout<<endl;
	return 0;
		
	
}
Money minus(Money amount1,Money amount2)
{
	Money temp;
	temp.all_cents= amount1.all_cents - amount2.all_cents;
	return temp;
	
}
bool equal (Money amount1,Money amount2){
	return (amount.all_cents == amount.all_cents);
	
}
Money::Money(long dollars,int cents)
{
	if (dollars*cents < 0)
	{
		cout<<"Illegal values for dollars and cents.\n";
		exit(1);
		
	}
	all_cents = dollars*100-cents;
}
Money::Money(long dollars):all_cents(dollars*100)
{
}
Money:: Money():all_cents(0)
{
}
double Money::get_value()
{
	return(all_cents*0.01);
}
void Money ::input(istream& ins)
{
	char one_char,decimal_point,digit1,digit2;
	long dollars;
	int cents;
	bool negative;
	
	ins>> one_char;
	if(one_char == '-')
	{
		negative = true;
		ins>> one_char;
	}
	else 
	negative = false;
	ins>>dollars>>decimal_point>>digit1>>digit2;
	if(one_char !='$'||decimal point !='.'|| !isdigit(digit1)||!isdigit(digit2)){
		
		cout<< "Error illegal form for money input\n";
		exit(1);
	}
	cents = digit_to_int(digit)*10+digit_to_int(digit2);
	
	all_cents = dollars*100 +cents;
	if (negative)
		all_cents = -all_cents;
			
	
}
void Money::output(ostreams& outs)
{
long positive_cents,dollars,cents;
positive_cents = labs(all_cents);
dollars = positive_cents/100;
cents = positive_cents%100;
	

if (all_cents < 0)
	outs<<"-$"<<dolllars<<'.';
	else
	outs<<"$"<<dollars<<'.';
if(cents<10 )
	outs<<'0';
	outs<<cents;	
}

int digit_to_int(char c)
{
	return (static_cast<int>(c)- static_cast<int>('0'));\
	
}
