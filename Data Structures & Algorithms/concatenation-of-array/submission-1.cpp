class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        vector<int> concat(len * 2);
        for(int i {0}; i < len; ++i) {
            concat[i] = concat[i + len] = nums[i];
        }
        return concat;
    }
};