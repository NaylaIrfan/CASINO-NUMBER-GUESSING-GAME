#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int secretNumber, guess;
    int coins = 100;
    int bet;

    srand(time(0));

    cout << "==============================" << endl;
    cout << "   CASINO NUMBER GUESSING GAME" << endl;
    cout << "==============================" << endl;

    cout << "You have " << coins << " coins." << endl;

    while (coins > 0)
    {
        cout << "\nEnter your bet: ";
        cin >> bet;

        if (bet <= 0 || bet > coins)
        {
            cout << "Invalid bet! Try again." << endl;
            continue;
        }

        secretNumber = rand() % 10 + 1;

        cout << "Guess a number between 1 and 10: ";
        cin >> guess;

        cout << "The winning number was: " << secretNumber << endl;

        if (guess == secretNumber)
        {
            cout << "Congratulations! You won!" << endl;
            coins = coins + bet;
        }
        else
        {
            cout << "Sorry! You lost." << endl;
            coins = coins - bet;
        }

        cout << "Your remaining coins: " << coins << endl;

        if (coins == 0)
        {
            cout << "\nGame Over! You have no coins left." << endl;
            break;
        }

        char choice;
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y')
        {
            cout << "\nThank you for playing!" << endl;
            break;
        }
    }

    return 0;
}
