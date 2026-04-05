#include <vector>
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
