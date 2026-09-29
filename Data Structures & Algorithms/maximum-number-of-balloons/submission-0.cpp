class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int balloons {0};
        
        unordered_map<char, int> balls;
        for(size_t i {0}; i < text.size(); ++i) {
            balls[text[i]]++;
        }
        
        balloons = min({balls['b'], balls['a'], balls['l'] / 2, balls['o'] / 2, balls['n']});

        return balloons;
    }
};