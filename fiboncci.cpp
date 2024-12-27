#include <iostream>
using namespace std;

int printFibonacci(int n){
    int a = 0;
    int b = 1;
    int next;
    for(int i=0; i<n; i++){
        if (i == 0){
        cout << a << " ";
    }else if (i == 1){
        cout << b << " ";
    }else if(i>=2){
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    printFibonacci(n);
    return 0;
}