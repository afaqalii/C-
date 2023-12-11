#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Constants
    const double INITIAL_POPULATION = 7.9e9;  // Current world population (as of knowledge cutoff in 2022)
    const double ANNUAL_GROWTH_RATE = 1.05;  // Assumed constant growth rate (5% per year)

    // Variables
    double population = INITIAL_POPULATION;

    // Output table header
    cout << setw(10) << "Year" << setw(25) << "Population (billions)" << setw(30) << "Increase from Previous Year" << endl;
    cout << setfill('-') << setw(65) << "" << setfill(' ') << endl;

    // Project population growth for the next 75 years
    for (int year = 1; year <= 75; ++year) {
        double increase = population * (ANNUAL_GROWTH_RATE / 100.0);
        population += increase;

        cout << setw(10) << year << fixed << setprecision(2) << setw(25) << population / 1e9 << setw(30) << increase / 1e9 << endl;

        // Check if the population has doubled
        if (population >= 2 * INITIAL_POPULATION) {
            cout << "The population is expected to double in year " << year << "." << endl;
            break;
        }
    }

    return 0;
}
