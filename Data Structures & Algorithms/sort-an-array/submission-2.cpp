class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        size_t n = nums.size();
        if (n <= 1) return nums;

        vector<int> left(nums.begin(), nums.begin() + n/2);
        vector<int> right(nums.begin() + n/2, nums.end());
        left  = sortArray(left);
        right = sortArray(right);

        return merge(left, right);
    }

    private:
    vector<int> merge(vector<int>& left, vector<int>& right) {
        size_t size = left.size() + right.size();
        vector<int> ans(size);
        size_t lpos {0};
        size_t rpos {0};

        while(lpos < left.size() && rpos < right.size()) {
            if (left[lpos] > right[rpos]) {
                ans[lpos + rpos] = right[rpos];
                rpos++;

            } else {
                ans[lpos + rpos] = left[lpos];
                lpos++;
            }
        }
        while (rpos < right.size()) {
            ans[rpos + lpos] = right[rpos];
            rpos++;
        }
    
        while (lpos < left.size()) {
            ans[rpos + lpos] = left[lpos];
            lpos++;
        }
        return ans;
    }
};