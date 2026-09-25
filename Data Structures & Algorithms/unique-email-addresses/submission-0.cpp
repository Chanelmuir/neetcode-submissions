class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        std::unordered_map<string, int> uniqueEmails;
        for (string& email : emails) {
            string em;
            bool domain = false;
            for (size_t i {0}; i < email.size(); ++i) {
                if (!domain) {
                    if(email[i] == '.') {
                    } else if (email[i] == '+') {
                        while(email[i+1] != '@') ++i;
                        domain = true;
                    }
                    else {em += email[i];}
                } else {
                    em += email[i];
                }
            }
            uniqueEmails[em]++;
        }
        return uniqueEmails.size();
    }
};