#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int n;
    cout << "Enter the Number Up to : " ;
    cin >> n;
    for(int i = 0; i<=n; i++){
        if(i % 2 == 0){
            // cout << ".";
        }else {
            sum =+ i;
        }
    }
    cout << "Addtion of the Odd sum number : " << sum << endl;
}