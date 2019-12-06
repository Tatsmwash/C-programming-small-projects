#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
 
int main() {
	
		double first_num ,second_num,third_num;
		ifstream in_stream;
		ofstream out_stream;
	
		
		
		in_stream.open("in_file.txt");
		
		if (in_stream.fail()){
			
			cout<<"Input file opening failed.\n";
			exit(1);
			
		}
	out_stream.open("out_file.txt");
	if(out_stream.fail())
	{
		
		cout<< "Output file opening failed.\n";
		exit(1);
	}


	
	cin>>first_num;
	cout<<":";
	cin>>second_num;
	cout<<":";
	cin>>third_num;
	cout<<":";
	in_stream>> first_num >>second_num>>third_num;
	in_stream.close();
	
	out_stream<<"first number :" first_num << ",second number :"<< second_num <<",Third number :"<< third_num ,
			  <<"\nArea First with radius:" <<first_num <<"="<<(3.142*( first_num* first_num))			  
			  <<"\nArea second with radius:" <<second_num <<"="<<(3.142*( second_num* second_num))			   
			  <<"\nArea third with radius:" <<third_num <<"="<<(3.142*( third_num* third_num))
			  << end1;
			  			  
		
		out_stream.close();
		
		return 0;	  
}
