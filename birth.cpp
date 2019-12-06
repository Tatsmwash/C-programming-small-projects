#include <iostream>
using namespace std;
class DayofYear
{
	public:
		friend bool equal(DayOfYear date1,DayOfYear date2);
		
		DayOfYear(int the_month,int the_day);
		
		DayOfYear();
		
		void input();
		void output();
		int get_month)();
		int get_day();
		
		private:
			void check_date();
			int month;
			int day;
			
		
};
int main()
{
DayOfYear today,bach_birthday;
 	cout<<"Enter today's date:\n";
 	today.input();
 	cout<<"Today's date is";
 	today.output();
 	
 	bach_birthday.set(3,21);
 	cout<<"J.S.Bach's birthday is:";
 	bach_birthday.output();
 	if(equal (today,bach_birthday))
 	cout<<"Happy Birthday Johnson Sebastian\n";
 	else
 	cout<<"Happy Unbirthday Johann Sebastian\n";
 	return 0;	

}
bool equal (DayOfYear date1,DayofYear date2)
{
	return (date1.month == date2.month && date1.day == date2.day);
	
	 
}
int DayOfYear::get_month()
 {
 return month;
 }
 int DayOfYear::get_day(){
 	return day;
 }
 

