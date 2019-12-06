#include <cstdlib>
#include <iostream>
#include <fstream>
#include <conio.h>


void randomDouble();
 using namespace std;
 
int main(void)
{

            
   randomDouble();        
	ifstream in_stream;
		ofstream out_stream;
	
   ifstream inFile;       
   inFile.open("9130212031.txt");

  
   int count = 0;         
   double num = 0;        
   double total = 0;      

   while(inFile >> num)   
   {
      total += num;       
      count++;            
   }

   
   cout.setf(ios::showpoint);
   cout.setf(ios::fixed);
   cout.setf(ios::showpos);
   cout.precision(3);
   cout << "\nThe total of " << count << " numbers is " << total << endl;
   cout << "The average is " << total / count << endl;

   inFile.close();        

   return 0 ;

} 
void randomDouble()
{
   int num;               
   double dNum;           
   double n;              

   cout << "How many random numbers do you want: ";
   cin >> num;

   if (num <= 0)          
   {                      
      num = 50;
      cout << "Error!!! " << num << " random numbers will be "
           << "generated." << endl;
   }

   ofstream outFile;               
   outFile.open("9130212031.txt");   
                    
   for (int i = 0; i < num; i++)
   {
      dNum = rand();               
      n = rand();                  

      if (n <= 0)                 
         n += 1;                   

      
      outFile << (dNum + (dNum / n)) << endl;
   }

   outFile.close();               

   return ;

}	
	
	
	
	
	


