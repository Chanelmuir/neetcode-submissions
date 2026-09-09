class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> numMap;

        for(int num : nums) {
            if (++numMap[num] > nums.size() / 2) return num;
        }
    }
};