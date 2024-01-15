#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cols, rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int marks[rows][cols];
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cout << rows << "/t";
            cout << cols << "/t";
            cin >> marks[r][c];
            cout << "student " << marks[r][c] << "marks ";
        }
    }

    return 0;
}
//