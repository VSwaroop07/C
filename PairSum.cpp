#include <iostream>
#include <vector>
using namespace std;

// Brute Force Method
vector<int> pairSum(vector<int> vec, int tar)
{
    int size = vec.size();
    vector<int> ans;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((vec[i] + vec[j]) == tar)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

// Optimal Method *Requires Sorted Array
vector<int> oPairSum(vector<int> vec, int tar)
{
    int size = vec.size();
    vector<int> ans;
    int st = 0;
    int end = size - 1;
    while (st < end)
    {
        int sum = vec[st] + vec[end];
        if (sum > tar)
        {
            end--; // Move the end pointer left
        }
        else if (sum < tar)
        {
            st++; // Move the start pointer right
        }
        else
        { // Pair found
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
}

int main()
{
    vector<int> vec = {2, 7, 22, 23};
    int tar = 9;
    vector<int> ans;
    ans = oPairSum(vec, tar);
    for (int val : ans)
    {
        cout << val;
    }

    // ans = pairSum(vec, tar);
    // for(int val : ans){
    //     cout<<val;
    // }

    return 0;
}
