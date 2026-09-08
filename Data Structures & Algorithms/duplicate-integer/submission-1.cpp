class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> numCounts;
        for (int i = 0; i < nums.size(); ++i){
            if (numCounts[nums[i]] == 1) return true;
            numCounts[nums[i]] = 1;
        }
        return false;

    }
};