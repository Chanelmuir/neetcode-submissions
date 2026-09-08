class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        std::unordered_map<char, int> characters;

        for(int i = 0; i < s.size(); ++i) {
            characters[s[i]] += 1;
            characters[t[i]] -= 1;
        }
        for (const auto& pair : characters) {
            if(pair.second != 0) return false;
        }
        return true;
    }
};
