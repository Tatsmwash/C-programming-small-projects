#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main ()

{
	
double hat (double w, double h);
double jacket (double w, double h, int a);
double waist (double w, double h, int a);	
double height;
double weight;
int age;
char yesno;
do{

cout << "Please enter your height (in inches):" << endl;
cin >> height;
cout << "Please enter your weight (in pounds):" << endl;
cin >> weight;
cout << "Please enter your age (in years):" << endl;
cin >> age;
cout << "Your hat size is: " << hat(weight, height) << endl;
cout << "Your jacket size is: " << jacket(weight, height, age) << endl;
cout << "Your waist size is: " << waist(weight, height, age) << endl;

cout << "Do you want to run again?" << endl;
cin >> yesno;
}
while (yesno == 'y'|| yesno == 'Y');

return 0;
} 

double hat (double w, double h)
{
double r;
r = (w / h)*2.9;
return (r);
}

double jacket (double w, double h, int a)
{
double r;
r = (w*h) / 288;
if (a >= 30 && a < 40)
	r = r + .125;
else if (a >= 40 && a < 50)
	r = r + .25;
else if (a >= 50 && a < 60)
	r = r + .375;
else if (a >= 60 && a < 70)
	r = r + .5;
else if (a >= 70 && a < 80)
	r = r + .625;
else if (a >= 80 && a < 90)
	r = r + .75;
else if (a >= 90 && a < 100)
	r = r + .875;
return (r);
}

double waist (double w, double h, int a)
{
double r;
r = w/5.7 + (a>28?(a-28)/2:0*.1); 
return (r);
}
