// Q101 Write a program to Create number guessing game.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int secretNum, guess, attempts = 0;
    srand(time(0));                                     //seeding random number generator
    secretNum = rand() % 100 + 1;                       //random number between 1 and 100
    
    cout << "--- NUMBER GUESSING GAME ---\n";
    cout << "GUESS A NUMBER BETWEEN 1 AND 100\n";
    
    do
    {
        cout << "ENTER YOUR GUESS: ";
        cin >> guess;
        attempts++;
        
        if (guess > secretNum)
        {
            cout << "TOO HIGH! TRY AGAIN.\n";
        }
        else if (guess < secretNum)
        {
            cout << "TOO LOW! TRY AGAIN.\n";
        }
        else
        {
            cout << "CONGRATULATIONS! YOU GUESSED IT IN " << attempts << " ATTEMPTS.\n";
        }
    } while (guess != secretNum);
    
    return 0;
}