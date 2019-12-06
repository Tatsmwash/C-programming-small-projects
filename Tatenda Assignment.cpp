#include <iostream>
using namespace std;
int main ()

{
	
double hat_size (int height, int weight,int age);
double jacket_size (int height , int weight, int age);
double waist_size(int height, int weight , int age);	
int height;
int weight;
int age;
char yesno;
do{

cout << "Enter your height (inch):" << endl;
cin >> height;
cout << "Enter your weight (pounds):" << endl;
cin >> weight;
cout << "Enter your age (years):" << endl;
cin >> age;
cout << "Hat size is: " << hat_size(weight, height,age)<< endl ;
cout << "Jacket size is: " << jacket_size(weight, height, age)<< endl ;
cout << "Waist size is:" << waist_size(weight, height, age)<< endl ;

cout << "Would you like to try again?" << endl;
cin >> yesno;
}
while (yesno == 'y'|| yesno == 'Y');

return 0;
} 

double hat_size (int height, int weight,int age)
{

double size = (weight / height)*2.9;

return size;
}

double jacket_size (int height , int weight, int age)
{
double size;
size = (weight*height) / 288;
if (age >= 30 && age  < 40)
	size = size + .125;
else if (age >= 40 && age < 50)
	size = size + .25;
else if (age >= 50 && age < 60)
	size = size + .375;
else if (age >= 60 && age < 70)
	size = size + .5;
else if (age >= 70 && age < 80)
	size  = size + .625;
else if (age >= 80 && age < 90)
	size = size + .75;
else if (age >= 90 && age < 100)
	size = size + .875;
return size;
}

double waist_size (int height , int weight, int age)
{
double size;
size= weight/5.7 + (age>28?(age-28)/2:0*.1); 
return size;
}
