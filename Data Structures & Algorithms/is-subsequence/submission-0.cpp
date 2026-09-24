class Solution {
public:
    bool isSubsequence(string s, string t) {
        size_t spos {0};
        size_t tpos {0};
        while (tpos < t.size() && spos < s.size()) {
            if (t[tpos] == s[spos]) {
                ++spos;
            } 
            ++tpos;
        }
        return tpos <= t.size() && spos == s.size();
    }
};