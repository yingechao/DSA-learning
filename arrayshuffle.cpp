#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans; // initialise a vector for the solution
        for (int i = 0; i < n; i++){
            ans.push_back(nums[i]); // add to the end of the array
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};

int main() {
    Solution sol; // create a Solution object to access the shuffle method

    vector<int> nums = {2,5,1,3,4,7}; // initialise vector nums and half of array size n
    int n = 3;

    vector<int> result = sol.shuffle(nums, n); // use shuffle method from sol to shuffle the nums array

    // print result
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
