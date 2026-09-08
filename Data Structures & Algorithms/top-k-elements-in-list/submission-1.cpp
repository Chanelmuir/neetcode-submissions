class Solution {
public:

    struct Pair {
        int key;
        int value;
    };

    struct CompareValues {
        bool operator()(const Pair& p1, const Pair& p2) {
            return p1.value < p2.value;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> frequencies;

        for(int num : nums) {
            ++frequencies[num];
        }

        std::priority_queue<Pair, std::vector<Pair>, CompareValues> pq;

        for (const auto& [num, count] : frequencies) {
            pq.push(Pair{num, count});
        }

        vector<int> output;
        for(int i {0}; i < k; ++i) {
            output.push_back(pq.top().key);
            pq.pop();
        }
        return output;
    }
};
