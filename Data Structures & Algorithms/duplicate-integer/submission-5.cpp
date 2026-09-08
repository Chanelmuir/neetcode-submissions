class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> numPassed;
        for (int i = 0; i < nums.size(); ++i){
            if (numPassed.count(nums[i]) == true) return true;
            numPassed.insert(nums[i]);
        }
        return false;

    }
};