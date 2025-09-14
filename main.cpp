#include <iostream>
using namespace std;

// Comment #1: Define a global constant called SIZE with value of 5.
const int SIZE = 5;

// Comment #2: Declare reverseArray and displayArray functions.
string * reverseArray(string *);
void displayArray(string *);

int main()
{
    // Comment #3: Dynamically allocate an array of strings of size SIZE.
    string *arr = new string[SIZE];

    // Comment #4: Prompt the user to enter SIZE strings and store them in the array.
    for (int i = 0; i < SIZE; i++)
    {
        getline(cin, *(arr + i));
    }
    
    // Comment #5: Display the original array.
    cout << "Original array: ";
    displayArray(arr);
    cout << endl << endl;

    // Comment #6: Call reverseArray to reverse the array and return the pointer to the reversed array.
    cout << "Reversed array: ";
    string *modifiedArr = reverseArray(arr);

    // Comment #7: Display the reversed array.
    displayArray(modifiedArr);
    cout << endl;

    // Comment #8: Deallocate the memory used by the arr array.
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