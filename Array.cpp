#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[size];
    // int size = sizeof(marks) / sizeof(int);

    //Inserting elements
    for(int i = 0; i<size; i++){
        cout << "insert Element At " << i << " Position : " ;
        cin >> marks[i];
    }
    cout << endl;
    //Printing elements
    for(int i = 0; i<size; i++){
        cout << "Elemnt at " << i << " Position is : " << marks[i] << endl;
    }
}