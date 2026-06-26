// Q108 Write a program to Create marksheet generation system.
#include <iostream>
using namespace std;

int main()
{
    char name[100], rollNo[50], className[20];
    float math, science, english, history, computer;
    float totalMarks, percentage;
    char grade;

    cout << "--- MARKSHEET GENERATION SYSTEM ---\n\n";

    // Inputting student details
    cout << "ENTER STUDENT NAME: ";
    cin.getline(name, 100);
    cout << "ENTER ROLL NUMBER: ";
    cin >> rollNo;
    cout << "ENTER CLASS: ";
    cin >> className;

    // Inputting marks for 5 subjects
    cout << "\nENTER MARKS OBTAINED OUT OF 100:\n";
    cout << "MATHEMATICS: ";
    cin >> math;
    cout << "SCIENCE: ";
    cin >> science;
    cout << "ENGLISH: ";
    cin >> english;
    cout << "HISTORY: ";
    cin >> history;
    cout << "COMPUTER SCIENCE: ";
    cin >> computer;

    // Calculations
    totalMarks = math + science + english + history + computer;
    percentage = (totalMarks / 500) * 100;

    // Grading Logic
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 50)
        grade = 'C';
    else if (percentage >= 35)
        grade = 'D';
    else
        grade = 'F';

    // Outputting formatted marksheet layout
    cout << "\n=========================================\n";
    cout << "           OFFICIAL MARKSHEET            \n";
    cout << "=========================================\n";
    cout << "NAME     : " << name << "\n";
    cout << "ROLL NO  : " << rollNo << "\n";
    cout << "CLASS    : " << className << "\n";
    cout << "-----------------------------------------\n";
    cout << "SUBJECT          MAX MARKS   MARKS OBTAINED\n";
    cout << "-----------------------------------------\n";
    cout << "MATHEMATICS         100           " << math << "\n";
    cout << "SCIENCE             100           " << science << "\n";
    cout << "ENGLISH             100           " << english << "\n";
    cout << "HISTORY             100           " << history << "\n";
    cout << "COMPUTER SCIENCE    100           " << computer << "\n";
    cout << "-----------------------------------------\n";
    cout << "TOTAL MARKS: " << totalMarks << " / 500\n";
    cout << "PERCENTAGE : " << percentage << "%\n";
    cout << "FINAL GRADE: " << grade << "\n";
    cout << "STATUS     : ";
    if (grade == 'F')
        cout << "FAILED\n";
    else
        cout << "PASSED\n";
    cout << "=========================================\n";

    return 0;
}