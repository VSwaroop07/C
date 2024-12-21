#include <iostream>
using namespace std;

int fact(int n){
    int sum = 1;
    for(int i = 1; i<=n; i++)
    {
        sum *= i;
    }
    return sum;
}
 int main(){
    int n = 8;
    int r = 2; 
    int res = fact(n) / (fact(r) * fact(n-r));
    cout << res;
    return 0;
 }