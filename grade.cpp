#include <iostream>

using namespace std;
StudentRecord;

student[CLASS_SIZE];

for(int i = 0; i < CLASS_SIZE; i++)

input(student[i]);

// Enclosing block fixes VC++ "for" loop control defined

outside loop

{ for(int i = 0; i <

CLASS_SIZE; i++)

{

computeGrade(student[i]); output(student[i]);

cout << endl;

}

}

return 0;

}

void input(StudentRecord &student) {

cout << "enter the studentnumber: ";

cin >> student.studentNumber; cout << student.studentNumber << endl;

cout << "enter two 10 point quizes" << endl;

cin >> student.quiz1 >>

student.quiz2;

cout << student.quiz1 << " " << student.quiz2 << endl;

cout << "enter the midterm and final exam grades."

<< "These are 100 point tests\n";

cin >> student.midterm >>

student.final;

cout << student.midterm << " " << student.final

<< endl << endl;

}

void computeGrade(StudentRecord& student)

{

// Of grade, final counts 50%, midterm 25%, quizes25%

double quizAvg= (student.quiz1 + student.quiz2)/2.0;

double quizAvgNormalized =

quizAvg * 10;

student.average = student.final * 0.5 +

student.midterm * 0.25 +

quizAvgNormalized * 0.25;

char letterGrade[]=

"FFFFFFDCBAA";

int index =

static_cast<int>(student.average/

10);

if(index < 0 || 10 <= index) {

cout << "Bad numeric grade encountered: "

<< student.average << endl

<< " Aborting.\n";

abort();

}

student.grade =

letterGrade[index];

}

void output(const StudentRecord student)

{

cout << "The record for student number: "

<< student.studentNumber << endl

<< "The quiz grades are: "
<< student.quiz1 << " " << student.quiz2

<< endl

<< "The midterm and exam grades are: "

<< student.midterm << " " << student.final

<< endl

<< "The numeric average is: " << student.average

<< endl

<< "and the letter grade assigned is "

<< student.grade

<< endl;

}
