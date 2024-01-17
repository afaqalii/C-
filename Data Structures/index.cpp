#include <iostream>

using namespace std;
int main()
{
    // array of objects
    struct PayRoll
    {
        string name;
        int empID;
        float salary;
    };
    PayRoll employes[3];
    cout << "Enter the details of three employees:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Employee " << (i + 1) << "\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, employes[i].name);
        cout << "Emp ID: ";
        cin >> employes[i].empID;
        cout << "Emp salary: ";
        cin >> employes[i].salary;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Name: " << employes[i].name << " ";
        cout << "Emp ID: " << employes[i].empID << " ";
        cout << "Emp Salary: " << employes[i].salary << " ";
        cout << endl;
    }

    return 0;
}