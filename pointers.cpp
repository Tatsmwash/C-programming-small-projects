
#include <iostream>    
using namespace std;

void Characters(char *p) 
{
    p[0] = 'x';        
    p++; 
}

void Letters(char* &p) 
{ 
    *(p+1) = 'y';
p++; 
}



int main()
{
    char str[] = "abc";
    char *ptrFront = str, *ptrRear = str;

    Characters(ptrFront);
    cout << "The ptrFront is equal to: " << ptrFront << endl;

    Letters(ptrRear);
    cout << "The ptrRear is equal to: " << ptrRear << endl;

    
    
    
    
}
