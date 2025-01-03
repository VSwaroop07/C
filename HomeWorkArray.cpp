#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
// Array homework

// Question One : Calculate SUM and Product of all numbers in array.
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

long long product(int arr[], int size)
{
    long long product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

// Question Two : Swap the max and min number from array.
void swapArray(int arr[], int size)
{
    int min = INT_MAX;
    int max = INT_MIN;
    int minIndex, maxIndex;

    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            minIndex = i;
        }
        if (max < arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    swap(arr[minIndex], arr[maxIndex]);
}

// Question Three : Find the unique Value in Array.
int unique(int arr[], int size)
{
    unordered_map<int, int> freqMap;
    for (int i = 0; i < size; i++)
    {
        freqMap[arr[i]]++; //Increament The count for arr[i]
    }
    // Printing a HashMap
    // for(const auto& pair:freqMap){
    //     cout<< pair.first << " " << pair.second << endl;
    // }
    //Printing Unique Values
    cout << "Unique Values in array : ";
    for(const auto& pair:freqMap){
        if(pair.second == 1){
            cout << pair.first << " ";
        }
    }
}

int main()
{
    int size = 10;
    int arr[size] = {23, 42, 54, 23, 24, 56, 33, 51, 53, 33};
    cout << "Arrya Before any opration : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int Asum = sum(arr, size);
    long long Aproduct = product(arr, size);
    cout << "Sum of all Elements : " << Asum << endl;
    cout << "Product of all Elements : " << Aproduct << endl;

    swapArray(arr, size);
    cout << "After Swapping Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    unique(arr, size);
}