#include <iostream>
using namespace std;
int main() {
    int a = 0;
    int b = 0;

    cout << "Enter Number One : ";
    cin >> a;
    cout << "Enter Number Two : ";
    cin >> b;

    if(a > b){
        cout << "A is greater then B";
    }else if(b > a){
        cout << "B is greater then A";
    }else{
        cout << "Both are Equal";
    }
    return 0;
}