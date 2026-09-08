class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> values;
        vector<int> result;

        for(int i = 0; i < nums.size(); ++i) {
            if (values[target - nums[i]] != 0) {
                result = {values[target - nums[i]] - 1, i};
                return result;
            }
            else {
                values[nums[i]] = i + 1;
            }

        } 
        return {0, 0};
    }
};
