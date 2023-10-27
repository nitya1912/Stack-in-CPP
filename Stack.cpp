#include <iostream>
#include <stack>

class MyStack 
{
private:
    std::stack<int> data;

public:
    void push(int value) {
        data.push(value);
    }

    void pop() {
        if (!data.empty()) {
            data.pop();
        } else {
            std::cout << "Stack is empty. Cannot pop.\n";
        }
    }

    int top() {
        if (!data.empty()) {
            return data.top();
        } else {
            std::cout << "Stack is empty.\n";
            return -1; // Return a sentinel value indicating an empty stack
        }
    }

    bool isEmpty() {
        return data.empty();
    }

    size_t size() {
        return data.size();
    }
};

int main() {
    MyStack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.top() << "\n";
    std::cout << "Stack size: " << myStack.size() << "\n";

    myStack.pop();
    std::cout << "After pop:\n";
    std::cout << "Top element: " << myStack.top() << "\n";
    std::cout << "Stack size: " << myStack.size() << "\n";

    myStack.pop();
    myStack.pop();
    myStack.pop(); // Trying to pop from an empty stack

    return 0;
}