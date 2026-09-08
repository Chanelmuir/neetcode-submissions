#include <array>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::unordered_map<string, vector<string>> anagrams;
        
        for(const std::string& str : strs)
        {
            std::array<int, 26> count {};
            for(int i {}; i < str.size(); ++i)
            {
                count[str[i] - 'a']++;
            }

            string key {};
            for(int i {}; i < 26; ++i) 
            {
                key += ',' + to_string(count[i]);
                count[i]--;
            }
            anagrams[key].push_back(str);
        }

        vector<vector<string>> result;
        for (const auto& [key, value] : anagrams) 
        {
            result.push_back(value);
        }
        return result;

    }
};
