class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int> characters;
        int length = max(s.size(), t.size());
        for(int i = 0; i < length; ++i) {
            characters[s[i]] += 1;
            characters[t[i]] -= 1;
        }
        for (const auto& pair : characters) {
            if(pair.second != 0) return false;
        }
        return true;
    }
};
