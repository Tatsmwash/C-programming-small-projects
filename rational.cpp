#include<iostream>

using namespace std;

class Rational
{
private:
    int num1,num2;
public:
    Rational();
Rational(int,int);
Rational(int);
friend ostream& operator<<(ostream& , const Rational&);
friend istream& operator>>(istream& , Rational&);
friend Rational operator+(const Rational& , const Rational&);

};


Rational operator+(const Rational& a, const Rational& b)
{
Rational temp;
temp.num1 = a.num1 * b.num2 + b.num1 * a.num2;
temp.num2 = a.num2 * b.num2;
return temp;
}

ostream& operator<<(ostream& out, const Rational& r)
{
if (r.num2 == 0)
out << "undefined" ;
  else
out << r.num1 << "/" << r.num2;
return out;

}
istream& operator>>(istream& in, Rational& r)
{
    in >> r.num1 >> r.num2;	
return in;
}

Rational::Rational()
{
num1 = 0;
num2 = 1;
}

Rational::Rational(int num1, int num2)
{
num1 = num1;
num2= num2;
}

Rational::Rational(int whole)
{
num1 = whole;
num2 = 1;
}

int main()
{

  Rational a;
  Rational b(1,2);
  Rational badnumber(1,0);
  Rational c(10);


  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  cout << "badnumber=" << badnumber << endl;
  cout << "c=" << c << endl;

cout << "Enter the rational number:";
cin >> a;
  cout << "a=" << a << endl;
cout << "a+b=" << (a + b)<< endl;

return 0;
}

