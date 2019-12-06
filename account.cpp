#include <iostream>
using namespace std;

class CDAccount
{
	private:
	double balance;
	double interest_rate;
	double maturity;
	int term;
	
};
void get_data(CDAccount& the_account);
int main()
{
	CDAccount account;
	get_data(account);
	
	double rate_fraction,interest;
	rate_fraction = account.interest_rate/100.0;
	interest =account.balance*rate_fraction*(account.term/12.0);
	account.balance=account.balance + interest;
	cout.setf(ios::fixed);
	cou.setf(ios::showpoint);
	cout.precision(2);
	cout<<"when your CD matures in"
		<<account.term<<"months,\n"
		<<"it will have abalance of $"
		<<account.balance<<endl;
		return 0;
	}
	void get_data(CDAccount& the_account)
	{
		
		cout<<"enter account balance:$";
		cin>>the_account.balance;
		cout<<"enter account interest rates:";
		cin>>the_account.interest_rate;
		cout<<"Enter the number of months until maturity\n"
			<<"(must be 12 or fewer months):";
		cin>>the_account.term;
		
		
		
	}
}
