#include <iostream>
#include <algorithm>
using namespace std; 


//This is a two pointer method for reversal of array.
int rev(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start <= end ){
        swap(arr[start], arr[end]);
        start ++;
        end--;
    }
}

int main(){
    int n = 10;
    int arr[n] = {92,24,53,23,12,56,7,85,42,34};
    cout<<"Element Before Swapping "; 
    for(int i =0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
    rev(arr, n);
    cout<<"Element After Swapping " ;
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }

    return 0;
}