#include <iostream>
using namespace std;

const int SIZE = 5;

void reverseArray(string *ptr);

int main()
{
    string *arr = new string[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        getline(cin, *(arr + i));
    }
    
    
    
    return 0;
}

void reverseArray(string *ptr)
{
    string temp;
    for (int i = 0; i < SIZE / 2; i++)
    {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + SIZE - i);
        *(ptr + SIZE - i) = temp;
    }
}