#include <iostream>
using namespace std;
int addValues(int, int);
int subtractValues(int, int);
int multiplyValues(int, int);
float divideValues(int, int);

int addValues(int firstValue, int secondValue)
{
    return firstValue + secondValue;
}
int subtractValues(int firstValue, int secondValue)
{
    return firstValue - secondValue;
}
int multiplyValues(int firstValue, int secondValue)
{
    return firstValue * secondValue;
}

float divideValues(int firstValue, int secondValue)
{
    if (firstValue > secondValue)
    {
        return firstValue / secondValue;
    }
    else if (secondValue > firstValue)
    {
        int sumNumber = secondValue + firstValue;
        firstValue = sumNumber - firstValue;
        secondValue = sumNumber - secondValue;
        return firstValue / secondValue;
    }
    else
    {
        return firstValue / secondValue;
    }
}
int main()
{
    int firstValue, secondValue, choice;
    while (choice != 5)
    {
        cout << "Enter value for first operand \n";
        cin >> firstValue;
        cout << "Enter value for second operand \n";
        cin >> secondValue;

        cout << "1. Additon" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;

        cin >> choice;
        if (choice == 1)
            cout << "\n The sum is " << addValues(firstValue, secondValue) << endl;
        else if (choice == 2)
            cout << "The difference is " << subtractValues(firstValue, secondValue) << endl;
        else if (choice == 3)
            cout << "The product is " << multiplyValues(firstValue, secondValue) << endl;
        else if (choice == 4)
            cout << "The quotient is " << divideValues(firstValue, secondValue) << endl;
        else
        {
            choice = 5;
        }
    }

    return 0;
}
