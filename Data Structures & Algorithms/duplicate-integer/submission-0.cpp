class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> numCounts;
        for (int i = 0; i < nums.size(); ++i){
            numCounts[nums[i]] += 1;
            if (numCounts[nums[i]] == 2) return true;
        }
        return false;

    }
};