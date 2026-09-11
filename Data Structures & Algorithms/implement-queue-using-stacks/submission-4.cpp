class MyQueue {
private:
    std::stack<int> s;
    std::stack<int> ss;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while (!s.empty()) {
            ss.push(s.top());
            s.pop();
        }
        s.push(x);
        while (!ss.empty()) {
            s.push(ss.top());
            ss.pop();
        }
    }
    
    int pop() {
        int top = s.top();
        s.pop();
        return top;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */