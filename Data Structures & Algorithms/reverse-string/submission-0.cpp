class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> s2 = s;
        size_t size = s.size();
        for(int i {0}; i < size; ++i) {
            s[size - 1 - i] = s2[i];
        }
    }
};