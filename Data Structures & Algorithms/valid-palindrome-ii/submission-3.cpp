class Solution {
public:
    bool validPalindrome(string s) {
        size_t i {0};
        size_t j {s.size() - 1};

        while (i < j) {
            if (s[i] != s[j]) {
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            }

            ++i;
            --j;
        }
        return true;
    }
    
    bool isPalindrome(string s, size_t i, size_t j) {
        while (i < j) {
            if (s[i] != s[j]) {return false;}
            ++i;
            --j;
        }
        return true;
    }
};