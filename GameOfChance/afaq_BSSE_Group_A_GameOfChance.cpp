#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed for random number generation
    srand(static_cast<unsigned int>(time(0)));

    // User balance
    double balance = 100.0; // Initial balance

    while (balance > 0)
    {
        // Input: Bet amount
        double betAmount;
        cout << "Your current balance: $" << balance << endl;
        cout << "Enter the amount you want to bet (1 to 10 units): ";
        cin >> betAmount;

        // Input validation
        if (betAmount < 1 || betAmount > 10 || betAmount > balance)
        {
            cout << "Invalid bet amount. Please enter a bet between 1 and 10 units within your balance." << endl;
            continue; // Restart the loop
        }

        // Input: Guess a number
        int userGuess;
        cout << "Guess a number between 0 and 30: ";
        cin >> userGuess;

        // Generate a random number between 0 and 30
        int randomNumber = rand() % 31;

        // Determine payout based on the rules
        double payout = 0.0;

        if (userGuess == randomNumber)
        {
            if (userGuess % 2 == 0)
            {
                payout = 2 * betAmount; // Even number
            }
            if (userGuess % 10 == 0)
            {
                payout *= 3; // Multiple of 10
            }
            if (userGuess == 2 || userGuess == 3 || userGuess == 5 || userGuess == 7 || userGuess == 11 || userGuess == 13 || userGuess == 17 || userGuess == 19 || userGuess == 23 || userGuess == 29)
            {
                payout *= 5; // Prime number
            }
            if (userGuess < 5)
            {
                payout += 2; // Below 5 bonus
            }
        }

        // Update balance
        balance += payout - betAmount;

        // Output result
        cout << "Random Number: " << randomNumber << endl;
        if (payout > 0)
        {
            cout << "Congratulations! You won $" << payout << endl;
        }
        else
        {
            cout << "Sorry, you lost $" << betAmount << endl;
        }

        // Check if the user wants to continue
        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y')
        {
            break; // Exit the loop if the user doesn't want to play again
        }
    }

    cout << "Game over. Your final balance is: $" << balance << endl;

    return 0;
}