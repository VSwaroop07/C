#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
// Array homework


//Question One : Calculate SUM and Product of all numbers in array.
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int product(int arr[], int size)
{
    int product = 0;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}


//Question Two : Swap the max and min number from array.
int swap(int arr[], int size)
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

    return 0;
}

// Question Three : Find the unique Value in Array.
int unique(int arr[], int size){
    for(int i =0; i<size; i++){
        for(int j =0; j<size; j++){
            if(arr[i] == arr[j]){

            }
        }
        
    }
}

