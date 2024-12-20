#include <iostream>
using namespace std;

int Check(int age) {
    if(age >= 18){
        cout << "User is eligible :)";
    }else{
        cout << "User is Not eligible :(";
    }
}
int main(){
    int age = 0;

    cout << "Enter the age : ";
    cin >> age;

    Check(age);
    return 0;
}