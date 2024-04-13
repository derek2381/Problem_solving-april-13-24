// problem link
// https://leetcode.com/problems/minimum-operations-to-collect-elements/description/

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> us;
        int count = 0, i = nums.size()-1;

        while(us.size() != k){
            if(nums[i] <= k){
                us.insert(nums[i]);
            }
            count++;
            i--;
        }

        return count;
    }
};
