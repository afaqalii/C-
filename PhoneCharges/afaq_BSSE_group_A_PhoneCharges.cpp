#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int accountNumber, minutes;
    char serviceCode;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;

    cout << "Enter the number of minutes the service was used: ";
    cin >> minutes;

    double amountDue = 0.0;

    if (serviceCode == 'r' || serviceCode == 'R') {
        // Regular service
        if (minutes > 50) {
            amountDue = 10.00 + 0.20 * (minutes - 50);
        } else {
            amountDue = 10.00;
        }
    } else if (serviceCode == 'p' || serviceCode == 'P') {
        // Premium service
        char timeCode;
        cout << "Enter time code (D/d for day, N/n for night): ";
        cin >> timeCode;

        if (timeCode == 'D' || timeCode == 'd') {
            // Daytime
            if (minutes > 75) {
                amountDue = 25.00 + 0.10 * (minutes - 75);
            } else {
                amountDue = 25.00;
            }
        } else if (timeCode == 'N' || timeCode == 'n') {
            // Nighttime
            if (minutes > 100) {
                amountDue = 25.00 + 0.05 * (minutes - 100);
            } else {
                amountDue = 25.00;
            }
        } else {
            cout << "Invalid time code. Exiting program." << endl;
            return 1; // Exit with an error code
        }
    } else {
        cout << "Invalid service code. Exiting program." << endl;
        return 1; // Exit with an error code
    }

    // Display the bill
    cout << fixed << setprecision(2);
    cout << "Account Number: " << accountNumber << endl;
    cout << "Type of Service: " << (serviceCode == 'r' || serviceCode == 'R' ? "Regular" : "Premium") << endl;
    cout << "Number of Minutes: " << minutes << endl;
    cout << "Amount Due: $" << amountDue << endl;

    return 0; // Exit successfully
}
