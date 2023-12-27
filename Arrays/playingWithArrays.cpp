#include <iostream>

using namespace std;

int main()
{
    const int size = 4;
    int newArra[size];
    int armaghanArray[size] = {1, 2, 3, 4};

    cout << "Ulta array\n";

    for (int i = size - 1; i >= 0; i--)
    {
        newArra[i] = armaghanArray[i];
        cout << newArra[i] << endl;
    }
    cout << "Sahi array\n";

    for (int i = 0; i < size; i++)
    {
        cout << newArra[i] << endl;
    }

    return 0;
}
