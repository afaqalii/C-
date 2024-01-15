#include <iostream>
using namespace std;

int main()
{
    int max = 3;
    int arr[max] = {1, 2, 3};
    int *arrPointer = arr;
    cout << "Ascending order";
    for (int i = 0; i < max; i++)
    {
        cout << *arrPointer << " ";
        arrPointer++;
    }
    cout << "Decending order";
    for (int i = 0; i < max; i++)
    {
        arrPointer--;
        cout << *arrPointer << " ";
    }
    return 0;
}