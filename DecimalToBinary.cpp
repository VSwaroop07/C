#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, power = 1, rem;
    while( decNum > 0){
        rem = decNum % 2;
        decNum /= 2;
        ans += (rem * power);        
        power = power * 10 ;
    }
    return ans;
}

int main (){
    // int decNum = 6;
    // int res = decToBinary(decNum);
    // cout << res ;
    for(int i = 0; i<=10; i++){
        cout << decToBinary(i) << endl;
    }
    return 0;
}