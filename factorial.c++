#include <iostream>
using namespace std;

int factorial(int n) {
    int sum = 1;

    for(int i = 1; i<=n; i++){
        sum *= i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number :" ;
    cin >> n;
    int sum = factorial(n);
    cout << "Factorial of " << n << " is " << sum; 

    return 0;
}