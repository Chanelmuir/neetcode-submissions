class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;

        for (char& cha : s) {
            if (cha == '(' || cha == '{' || cha == '[') {
                stack.push_back(cha);
            } else {
                char top {'a'};
                if(stack.size()) {top = stack.back();}
                

                if (cha == ')' && top == '(' || 
                cha == '}' &&  top == '{'
                || cha == ']' && top == '[') {
                    stack.pop_back();
                } else {
                    return false;
                }
            }
        }
        return stack.size() == 0;
    }
};
