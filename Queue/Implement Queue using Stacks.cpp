class MyQueue {
public:
    stack<int> mainStack;
    stack<int> tempStack;
    MyQueue() {
        
    }
    
    void push(int x) {
        mainStack.push(x);
    }
    
    int pop() {
        if (mainStack.empty()) return -1;
        while(!mainStack.empty()) {
            tempStack.push(mainStack.top());
            mainStack.pop();
        }
        int item = tempStack.top();
        tempStack.pop();
        while(!tempStack.empty()) {
            mainStack.push(tempStack.top());
            tempStack.pop();
        }
        return item;
    }
    
    int peek() {
        if (mainStack.empty()) return -1;
        while(!mainStack.empty()) {
            tempStack.push(mainStack.top());
            mainStack.pop();
        }
        int item = tempStack.top();
        while(!tempStack.empty()) {
            mainStack.push(tempStack.top());
            tempStack.pop();
        }
        return item;
    }
    
    bool empty() {
        return mainStack.empty();
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
