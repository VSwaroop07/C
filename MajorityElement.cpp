#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Brute Force : Check the frequence of each element and display the result.
int Brute(vector<int> vec){
    int n = vec.size();
    for(int val : vec){
        int freq = 0;
        for(int el : vec){
        if(el == val){
            freq++;
        }
        }
        if(freq > n/2){
            return val;
        }
    }
}

//Optimal : 
int Optimal(vector<int> vector){
    int size = vector.size();
    //Sort
    sort(vector.begin(),vector.end());
    //FreqCount: 
    int freq = 1, ans = vector[0];
    for(int i =1; i<size; i++){
        if(vector[i] == vector[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = vector[i];
        }

        if(freq > size/2){
            return ans;
        }
    }
    return ans;
}

//Moore's Voting Algo : It states that the frequency of the majority element can beat any other numbers frequency so we dont have to change the frequency each time.
int Moores(vector<int> vec){
    int freq = 0, ans = 0;
    int size = vec.size();
    for(int i = 0; i<size; i++){
        if(freq == 0){
            ans = vec[0];
        }else if(ans == vec[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

//Moores Algo if no majority element present
int MooresN(vector<int> vec){
     int freq = 0, ans = 0;
    int size = vec.size();
    for(int i = 0; i<size; i++){
        if(freq == 0){
            ans = vec[0];
        }else if(ans == vec[i]){
            freq++;
        }else{
            freq--;
        }
    }

    //This logic Checkes if the majority Element Stisfy The condition of > n/2.
    int count = 0;
    for(int val : vec){
        if(val == ans){
            count++;
        }
    }

    if(count > size/2){
        return ans;
    }else{
        return -1;
    }
}

int main(){
    vector<int> nums = {1,2,1,2,1};
    int ans = Brute(nums);
    int ansO = Optimal(nums);
    int ansM = Moores(nums);
    int ansMN = MooresN(nums);
    if(ansMN == -1){
        cout << "No Majority Element Present.";
    }else{
        cout << "Majority Element : "<< ansMN << endl;
    }
    cout << "BruteForce answer : " << ans << endl;
    cout << "Optimal Answer : " << ansO << endl;
    cout << "Moore'sVoting Algorithm Answer : " << ansM << endl;


}