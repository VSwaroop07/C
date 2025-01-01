#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int trg){
    for(int i = 0; i<size; i++){
        if(arr[i] == trg){
            return i; //Found
        }
    }
    return -1; //Not Found
}

int main(){
    int n = 10;
    int arr[n] = {92,24,53,23,12,56,7,85,42,34};
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    int result = linearSearch(arr, n, target) ;
    if(result == -1){
        cout<< "Element Not Present in the Array";
    }else{
        cout<< "Element Present at index " << result << endl;
    }

    return 0;
}