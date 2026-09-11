class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int i {0};
        int j {size - 1};
        while (i < size / 2 && j >= size/2) {
            char left = s[i];
            char right = s[j];

            if (left >= 'A' && left <= 'Z') {left += 32;}
            if (right >= 'A' && right <= 'Z') {right += 32;}

            if( left >= '0' && left <= '9' ||
                left >= 'a' && left <= 'z'
                ) {
                    if (right >= '0' && right <= '9' ||
                        right >= 'a' && right <= 'z'
                        ) {
                            if (left == right) {
                                ++i; --j;
                            } else {
                                return false;
                            }
                        } else {
                            --j;
                        }
                    
                } else {
                    ++i;
                }
        }
        return true;
    }
};
