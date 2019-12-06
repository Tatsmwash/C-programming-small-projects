#include <iostream>

using namespace std;

class CDAccount

{

public:

CDAccount();

CDAccount(double bal, double int_rate, int t );

double Interest_rate();

double Balance();

double maturity(); 
int Term();

void input(istream&);

void output(ostream&);

private:

double Balance;

double Interest_rate; 


int Term; 

double maturity;

};

int main()

{

double Balance; double Interest_rate

double maturity;

int Term;

CDAccount account =;

CDAccount( 100.0, 10.0, 6 );

cout << "CD Account interest rate: "

<< account.Interest_rate() << endl;

cout << "CD Account initial balance: "

<<account.Balance() << endl;

cout << "CD Account balance at maturity is: "

<<account.maturity() << endl;
cout << "CD Account term is: " << account.Term()

<< " months"<< endl;

<<account.output(cout);

cout << "Enter CD Balance, Interest_rate, "

<< " and term: " << endl; account.input(cin);

cout << "CD Account interest rate: "

<< account.Interest_rate() << endl;

cout << "CD Account initial balance: "

<<account.Balance() << endl;

cout << "CD Account balance at maturity is: "

<<

account.maturity() << endl;

cout << "CD Account term is: " << account.Term()

<< " months"<< endl;

account.output( cout );

cout << endl;

}

CDAccount::CDAccount() {  }

CDAccount::CDAccount(double bal, double int_rate, int t )

{

Balance = bal;

Interest_rate = int_rate;

Term = t;

}

double CDAccount::Interest_rate() {

return interest_rate;

}

double

CDAccount::Balance()

{

return Balance;

}

double

CDAccount::maturity()

{

return Balance * (1+

(Interest_rate /100)*(Term/12.0));

}

int CDAccount::Term()

{

return Term;

}

void CDAccount::input(istream& inStream)

{

inStream >> Balance;

inStream >> Interest_rate;

inStream >> Term;

}

void CDAccount::output(ostream& outStream)

{

outStream.setf(ios::fixed);

outStream.setf(ios::showpoint);

outStream.precision(2);

outStream << "when your CD matures in " << Term

<< " months" <<

endl

<< "it will have a balance of "

<<

maturity() << endl;

}
