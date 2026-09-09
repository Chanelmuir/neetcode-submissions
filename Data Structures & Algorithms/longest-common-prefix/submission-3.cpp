class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        for(size_t j {0}; j < strs[0].size(); ++j) 
        {
            for(size_t i {1}; i < strs.size(); ++i)
            {
                if (j >= strs[i].size() || strs[i][j] != strs[0][j]) { 
                    return result;
                }
            }
            result += strs[0][j];
        }
        return result;
    }
};