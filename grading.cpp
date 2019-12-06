#include <iostream>

using namespace std;

struct student_record{
      
       int quiz1,quiz2;
       double midterm ;
       double final ;
       double average_quiz;
       double numeric_score;

};

int main()
{
     struct student_record result;
     cout<< "Enter first quiz mark: " << result.quiz1<<endl;
     cin>>result.quiz1;
     cout<< "Enter second quiz mark: "<< result.quiz2<<endl;
     cin>>result.quiz2;
     cout<< "Enter midterm exam mark: "<< result.midterm<<endl;
     cin>>result.midterm;
     cout<< "Enter final exam mark: " << result.final<<endl;
     cin>>result.final;
     


     }
     
void calculateResult(student_record& result)
{
     double quiz1_percent, quiz2_percent;
     quiz1_percent = (100*result.quiz1)/10.0;
     quiz2_percent = (100*result.quiz2)/10.0;
     double average_quiz = (quiz1_percent + quiz2_percent)/2;
     result.numeric_score = average_quiz + (result.midterm * 0.25) + (result.final * 0.50);    
     
     }
     
void displayResult(student_record& result)
{
     cout<<" Total quiz marks : " << result.average_quiz<<endl;
     cout<<" Midterm : " << result.midterm<<endl;
     cout<<" Final Exam : " << result.final<<endl;
     cout<<" Course average score : " << result.numeric_score<<endl;
     cout<<endl;
     }
     
     
     
