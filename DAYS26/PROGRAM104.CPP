// Q104 Write a program to Create quiz application.
#include <iostream>
using namespace std;

int main()
{
    int ans1, ans2, score = 0;
    
    cout << "--- QUIZ APPLICATION ---\n\n";
    
    // Question 1
    cout << "Q1. WHAT IS THE SIZE OF INT DATA TYPE IN C++? (IN BYTES)\n";
    cout << "1. One\n2. Two\n3. Four\n4. Eight\n";
    cout << "ENTER YOUR OPTION (1-4): ";
    cin >> ans1;
    if (ans1 == 3)
    {
        cout << "CORRECT!\n\n";
        score++;
    }
    else
    {
        cout << "WRONG! CORRECT ANSWER IS 3. Four\n\n";
    }
    
    // Question 2
    cout << "Q2. WHICH OF THE FOLLOWING IS USED FOR MULTI-LINE COMMENTS?\n";
    cout << "1. //\n2. /* */\n3. #\n4. \n";
    cout << "ENTER YOUR OPTION (1-4): ";
    cin >> ans2;
    if (ans2 == 2)
    {
        cout << "CORRECT!\n\n";
        score++;
    }
    else
    {
        cout << "WRONG! CORRECT ANSWER IS 2. /* */\n\n";
    }
    
    cout << "--- QUIZ COMPLETED ---\n";
    cout << "YOUR TOTAL SCORE IS: " << score << "/2\n";
    
    return 0;
}