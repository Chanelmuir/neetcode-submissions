class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, bool> numPassed;
        for (int i = 0; i < nums.size(); ++i){
            if (numPassed[nums[i]] == true) return true;
            numPassed[nums[i]] = true;
        }
        return false;

    }
};