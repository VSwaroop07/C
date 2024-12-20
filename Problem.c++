#include <iostream>
using namespace std;

int main() {
    int principle = 0;
    float rateOfIntreset = 0;
    int time = 0;

    cout << "Enter The Principle Ammount : ";
    cin >> principle;
    cout << "Enter the rate of intrest : ";
    cin >> rateOfIntreset;
    cout << "Enter the Time : ";
    cin >> time;

    float SI = principle * rateOfIntreset * time;
    cout << "The Simple Interset is : " << SI;

    return 0;
}
