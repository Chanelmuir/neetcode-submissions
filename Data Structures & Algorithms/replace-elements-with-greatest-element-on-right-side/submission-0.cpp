class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(size_t i {0}; i < arr.size(); ++i) {
            int max {-1};
            for (size_t j {i + 1}; j < arr.size(); ++j) {
                if (arr[j] > max) {max = arr[j];}
            }
            arr[i] = max;
        }
        return arr;
    }
};