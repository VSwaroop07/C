#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 4};
    vector<char> vec1 = {'a', 'b', 'c'};
    vector<int> vec2(4, 9); //(Size of vector, Element at each position)
    vector<int> vec3;
    cout << vec[0] << endl;
    for (char i : vec1)
    { // For each Loop for Vector
        cout << i << endl;
    }

    vec2.push_back(2); //Push element at last position
    cout << "Size of Vector : " << vec2.size() << endl;
    vec2.pop_back(); //Pop element at last position
    cout << "Size of Vector : " << vec2.size() << endl;
    vec2.push_back(2); //Push element at last position

    cout << "First Element of vector : " <<  vec2.front() << endl;
    cout << "Last Element of vector : " <<  vec2.back() << endl;
    cout << "At 3rd Index Element of vector : " <<  vec2.at(3) << endl;

    vec3.push_back(0);
    vec3.push_back(1);
    vec3.push_back(2);
    cout << "Size of vector : " <<vec3.size() << endl; //3
    cout << "Capacity of vector : "<<vec3.capacity() << endl; //The Capacity of vector is doubbled when the capasity is full and a new element is about be added. 4


    return 0;
}