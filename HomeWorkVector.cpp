#include <iostream>
#include <vector>
using namespace std;

//Question One : Linear Search In Vector
int linearSearch(vector<int> vec, int tar){
    for(int val : vec){
        if(val == tar){
            return val;
        }
    }
    return -1;
}

//Question Two : Reverse Vector
int Rev(vector<int>& vec){ //With the &(Pass By Referance) the main value of vector changes with the function performing oprations
    int start =0;
    int end = vec.size() - 1;
    while(start <= end){
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;
        start++;
        end--;
    }
    // for(int val : vec){
    //     cout << val << " ";
    // }
    return 0;
}

int main() {
    vector<int> vec = {2,3,41,34,45};
    vector<int> vecR = {2,3,4,5,6,7,8,9};
    int tar = 34;
    if(linearSearch(vec, tar) == tar){
        cout << "Element Present in the list : " <<tar;
    }else{
        cout << "Element Not Present in the list ";

    }
    cout<< "vector before reverse : ";
    for(int val : vecR){
        cout << val << " ";
    }
    cout<< "vector After reverse : ";
    Rev(vecR);
    for(int val : vecR){
        cout << val << " ";
    }
    return 0;
}