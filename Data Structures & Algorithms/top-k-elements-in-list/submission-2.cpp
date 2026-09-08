class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> frequencies;
        for(int num : nums) { ++frequencies[num]; }

        std::vector<vector<int>> buckets(nums.size() + 1);

        for(const auto& [num, freq] : frequencies) {
            buckets[freq].push_back(num);
        }

        vector<int> output;
        for(int i = buckets.size() - 1; i >= 0 && output.size() < k; --i) {
            for (int value : buckets[i]) {
                output.push_back(value);
                if (output.size() >= k) return output;
            }
        }
        
        return output;
    }
};
