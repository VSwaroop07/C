#include <iostream>
#include <vector>
using namespace std;

int unique(vector<int>& nums){
    int ans = 0;
    for(int val : nums){
        ans ^= val;
    }
    return ans;
}

int main(){
    vector<int> vec = {4,2,1,2,1};
    int ans = unique(vec);
    cout << "Single Unique Value : " << ans;
    return 0;
}
