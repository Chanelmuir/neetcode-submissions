class Solution {
public:
    int scoreOfString(string s) {
        int sum {0};
        for (size_t spos {1}; spos < s.size(); ++spos) {
            sum += abs(s[spos] - s[spos - 1]);
        }
        return sum;
    }
};