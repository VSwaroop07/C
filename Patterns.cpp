#include <iostream>
using namespace std;

int Numeric(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }
}

int charastrictic(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}

int ladder(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int numLadder(int n)
{
    // int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i+1 << " ";
        }
        // count = count + 1;
        cout << endl;
    }
}

int charLadder(int n){
    char ch = 'A';
    for(int i = 0; i< n; i++){
        for(int j = 0 ; j < i+1; j++){
            cout << ch << " "; 
        }
        cout << endl;
        ch = ch + 1;
    }
}

int verLa(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

int revNum(int n){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}

int floydTri(int n){
    int c = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << c << " ";
            c = c + 1;
        }
        cout << endl;
    }
}

int invertedTri(int n){
    for(int i = 0; i<n; i++)
    {
        for(int k = 0; k<i; k++){
        cout << " " ;
        }
        for(int j=0;j<n-i;j--){
            cout << i + 1 ;
        }
        cout << endl;
    }
}

int invertedAbcTri(int n){
    char ch = 'A';
    for(int i = 0; i<n; i++){
        for(int k = 0; k<i; k++){ //Space
            cout << " ";
        }
        for(int j = 0; j < n-i; j++){ //Alphabets
            cout << ch;
        }
        ch = ch + 1;
        cout << endl;
    }
}

int Pyramid(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){ //Spaces
            cout << " ";
        }
        for(int j = 1; j <= i+1; j++ ){ // first Nums
            cout << j ;
        }
        for(int j = i; j>0; j--){ // Second Numbers
            cout << j ;
        }
        cout << endl;
    }
}

int HollowDiamond(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0;j <n-i-1; j++){ //OuterSpaces
            cout << " ";
        }
        cout << "*";
        if(i != 0){
            for(int j = 0; j<2*i-1; j++){//InnerSpace
                cout << " " ;
            }
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<i+1; j++){
            cout << " ";
        }
        cout << "*";
        if(i != n-2){
            for(int j = 0;j<2*(n-i)-5; j++ ){
                cout << " ";
            }
            cout << "*";
        }
        cout<< endl;
    }
}

int Butterfly(int n){
    for(int i = 0; i< n; i++){ //First Loop Top
        for(int j = 0; j<i+1;j++){ //Star First
        cout << "*";
        }
        for(int j = 0; j<n-i-1; j++){ //Sapces First
        cout << " ";
        }
        for(int j = 0; j<n-i-1; j++){ //Sapces Second
        cout << " ";
        }
        for(int j = 0; j<i+1;j++){ //Star Second
        cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i<n; i++){ //Second Loop Bottom
        for(int j = 0; j<n-i-1;j++){ //First Stars
            cout << "*";
        }
        for(int j = 0; j<i+1; j++){ //First Spaces
            cout << " ";
        }
        for(int j = 0; j<i+1; j++){ //Second Spaces
            cout << " ";
        }

        for(int j = 0; j<n-i-1; j++){ //Second Stars
            cout << "*";
        }
        cout << endl;
    }

}

int main()
{
    int n = 8;
    // Numeric(n);
    // charastrictic(n);
    // ladder(n);
    // numLadder(n);
    // charLadder(n);
    // verLa(n);
    // revNum(n);
    // floydTri(n);
    // invertedTri(n);
    // invertedAbcTri(n);
    // Pyramid(n);
    // HollowDiamond(n);
    Butterfly(n);
    return 0;
}