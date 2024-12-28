#include <iostream>
#include <climits>
using namespace std;

int smallestNumber(int arr[])
{
    int smallest = INT_MAX;
    // int size = sizeof(arr) / sizeof(int);
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

int highestNumber(int arr[])
{
    int highest = INT_MIN;
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    return highest;
}

int main()
{
    int size = 5;
    int marks[size];

    // Inserting elements
    for (int i = 0; i < size; i++)
    {
        cout << "insert Element At " << i << " Position : ";
        cin >> marks[i];
    }
    cout << endl;
    // Printing elements
    for (int i = 0; i < size; i++)
    {
        cout << "Elemnt at " << i << " Position is : " << marks[i] << endl;
    }
    // Smallest Element
    cout << "Lowest Marks : " << smallestNumber(marks) << endl;
    // Highest Element
    cout << "Highest Marks : " << highestNumber(marks) << endl;
    return 0;
}