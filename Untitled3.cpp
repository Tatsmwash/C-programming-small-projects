#include 
#include 
#include 
using namespace std;

//function declaration
double hat(double,double);
//purpose: find size of hat
//preconditon: input weight in pounds & height in inches
//postcondtion: return size of hat

//function declaration
double jacket(double,double,int);
//purpose: find size of jacket
//preconditon: input height in inches & weight in pounds & age 
//postcondtion: return size of jacket

//function declaration
double waist(double,double,int);
//purpose: find size of waist
//preconditon: input weight in pounds & age 
//postcondtion: return size of waist

int main ()
{
//variable declaration
double height, weight;
int age;
char answer;

//format decimal
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

cout << "\t\t This program will calculate a customers size for hat\n"
<< "\t\t jacket and waist based on inputs of age weight and height.\n\n";

do
{
cout<< "Enter the customer's height in inches: ";
cin>>height;
cout<< "Enter the customer's weight in pounds: ";
cin>>weight;
cout<< "Enter the customer's age: ";
cin>>age;
cout< cout<< "\tYour Hat size: "< cout<< "\tYour Jacket size: "< cout<< "\tYour Waist size: "< cout<< "Would you like to continue (y/n)? ";
cin>>answer;
}while(toupper(answer) == 'Y');
cout<< "End of program"< return 0;
}

//function definition
double hat(double weight ,double height)
{
return ((weight/height) * 2.9);
}

//function definition
double jacket(double height,double weight,int age)
{ 
double size;
int j;
if (age>=30)
{
if((age % 10) !=0)
age = age-(age%10);
j= (age-30)/10;
size =((height * weight) / 288)+((1.0/8)*j);
}
else
size =((height * weight) / 288);
return size;
}

//function definition
double waist(double height,double weight,int age)
{
double size2;
int k;
if(age >= 28)
{
if((age % 2) !=0)
age = age-(age%2);
k = (age-28)/2;
size2 = (weight/(5.7))+( (1.0/10)*k);
}
else 
size2 = weight / (5.7);
return size2;
}

