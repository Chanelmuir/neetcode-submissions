class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int max{-1};
        int temp;
        for (int i = arr.size() - 1; i >= 0; --i) {
            temp = max;
            if (arr[i] > max) {
                max = arr[i];
            }
            arr[i] = temp;
        }
        return arr;
    }
};