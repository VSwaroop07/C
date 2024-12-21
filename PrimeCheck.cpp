#include <iostream>
using namespace std;
int isPrime(int n){
    if(n == 0 || n == 1){
        return false;
    }
    for(int i = 2; i<n; i++){
        if(n % i == 0 ){
            return false;
            break;
        }
    }
    return true;
}


int main(){
    int n = 100;
    // prime(4);
    for(int i = 1; i<=n; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
    return 0;
}