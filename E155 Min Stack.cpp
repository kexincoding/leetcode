class MinStack {
public:

    stack<int> a;
    stack<int> amin;

    MinStack() {

    }

    void push(int x) {
        a.push(x);
        if(amin.empty()||amin.top()>=x)
            amin.push(x);
    }

    void pop() {
        if(a.top()==amin.top())
            amin.pop();
        a.pop();

    }

    int top() {
        return a.top();
    }

    int getMin() {
        return amin.top();
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
