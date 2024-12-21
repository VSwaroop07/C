#include <iostream>
using namespace std;

//  MY APPROCH
// int lenght(int n){
//     int lenght = 0;
//     while( n != 0){
//         n /= 10;
//         lenght ++;
//     }
//     return lenght;
// }

// int DigitSeprator(int n){
//     int sum = 0;
//     int l = lenght(n);
//     for(int i = 0; i<=l; i++){
//         int lastDig = n % 10;
//         n /= 10;
//         sum += lastDig;
//     }
//     return sum;
// }

// Video Solution
int Sum(int n){
    int sum = 0;
    while (n > 0)
    {
        int lastDig = n % 10;
        n /= 10;
        sum += lastDig;
    }
    return sum;
    
}

int main() {
    int n = 145;
    // int sum = DigitSeprator(n);
    int sum = Sum(n);
    cout << sum;
    return 0;
}