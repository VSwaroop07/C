#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int tar)
{
    int size = vec.size();
    vector<int> ans;
    for (int i = 0; i < size; i++)
    {
        for(int j = i+1; j<size; j++){
            if((vec[i] + vec[j]) == tar){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

int main(){
    vector<int> vec = {34,7,2,23};
    int tar = 9;
    vector<int> ans;
    ans = pairSum(vec, tar);
    for(int val : ans){
        cout<<val;
    }
    return 0;
}
