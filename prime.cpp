#include <iostream>
using namespace std;
int prime(int n){
    bool isPrime = true;
    for(int i = 2; i<n; i++){
        if( n % i == 0){
           isPrime = false;
        }
    }

    if(isPrime){
            cout << "Number is Prime";
        }else{
            cout << "Number is Not Prime";
        }
} 

int star(int n, int m) {
    for(int i = 0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<m; j++){
            // if()
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}
int main() {
    
    int m = 4;
    int n = 4;
    // cout << "Enter a number to find prime or not : ";
    // cin >> n;
    // prime(n);

    star(n, m);
    return 0;
}