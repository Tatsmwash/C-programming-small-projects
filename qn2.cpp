#include <cstring>
#include <iostream>

 

const int MAXIMUM_LENGTH = 100; 

void swap(char a[], int size); 

int main() 
{ 
     std::cout << "Please Enter characters to be reversed: \n";
     char userEntry[MAXIMUM_LENGTH]; 
     std::cin.getline(userEntry, MAXIMUM_LENGTH); 
     int length = strlen(userEntry); 
     std::cout << "\n Length of the string is: " << length << " Characters .\n"; 
     swap(userEntry, length); 
     std::cout << "Swapped string: " << userEntry << '\n'; 
} 

void swap(char a[], int length) 
{ 
     char *front = a; 
     char *rear = a + length - 1; 
     for(  front<=rear; ++front, --rear) 
         std::iter_swap(front, rear); 
} 

