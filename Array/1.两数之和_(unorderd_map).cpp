/*
 * @lc app=leetcode.cn id=1 lang=cpp
 * https://leetcode.com/problems/two-sum/
 * [1] Two sums
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int numToFind = target - nums[i];
            //if numberToFind is found in map, return them
            if (hash.find(numToFind) != hash.end()) {
                ans.push_back(hash[numToFind]);
                ans.push_back(i);
                return ans;
            }
            //number was not found. Put it in the map.
            hash[nums[i]] = i;
        }
        return ans;
    }
};
// @lc code=end

