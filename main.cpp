#include <iostream>
using namespace std;

const int SIZE = 5;

string * reverseArray(string *);
void displayArray(string *);

int main()
{
    string *arr = new string[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        getline(cin, *(arr + i));
    }
    
    cout << "Original array: ";
    displayArray(arr);
    cout << endl;

    cout << "Reversed array: ";
    string *modifiedArr = reverseArray(arr);

    delete[] arr;
    
    return 0;
}

string * reverseArray(string *ptr)
{
    string temp;
    for (int i = 0; i < SIZE / 2; i++)
    {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + SIZE - 1 - i);
        *(ptr + SIZE - 1 - i) = temp;
    }

    return ptr;
}

void displayArray(string *ptr)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << *(ptr + i) << " ";
    }
}