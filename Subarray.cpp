#include <iostream>
#include <climits>
using namespace std;

// Subarray is a contigues part of array in a liner way it can start from one place and end at a place but it is contigues.
int subarrayPrint(int arr[], int size)
{
    for (int st = 0; st <= size; st++)
    {
        for (int end = st; end <= size; end++)
        {
            for (int i = st; i < end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

// Maximum Subarray Sum
int SubarrayMaxSum(int arr[], int size)
{
    int maxSum = INT_MIN;
    for (int st = 0; st < size; st++)
    {
        int currentSum = 0;
        for (int end = st; end < size; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    return maxSum;
}

int KadanesAlgo(int arr[], int size)
{
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < size; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0) // Reset of the Current sum is done at last so we can get -ve largerst at least.
        {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    subarrayPrint(arr, size);
    int max = SubarrayMaxSum(arr, size);
    int maxK = KadanesAlgo(arr, size);
    cout << "The Maximum Subarray Sum Is : " << max << endl;
    cout << "The Maximum Subarray Sum Is : " << maxK << endl;
    return 0;
}