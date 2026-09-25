class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniorCount {0};
        for(string& person : details) {
            int age = (person[11] - '0') * 10 + (person[12] - '0');
            if (age > 60) ++seniorCount;
        }
        return seniorCount;
    }
};