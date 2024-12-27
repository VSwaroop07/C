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

int binaryToDecimal(int binaryNum){
    int ans = 0, power = 1, rem;
    while(binaryNum > 0){
        rem = binaryNum % 10;
        binaryNum /= 10 ;
        ans += rem*power;
        power = power * 2;
    }
    return ans;
}

int main (){
    // int decNum = 6;
    // int res = decToBinary(decNum);
    // cout << res ;
    // for(int i = 0; i<=10; i++){
    //     cout << decToBinary(i) << endl;
    // }
    int binaryNum = 101;
    cout << binaryToDecimal(binaryNum);
    return 0;
}