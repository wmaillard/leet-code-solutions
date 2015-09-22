//Implement Queue using Stacks
//https://leetcode.com/problems/implement-queue-using-stacks/


/* 
Implement the following operations of a queue using stacks.

push(x) -- Push element x to the back of queue.
pop() -- Removes the element from in front of queue.
peek() -- Get the front element.
empty() -- Return whether the queue is empty.
Notes:
You must use only standard operations of a stack -- which means only push to top, peek/pop from top, size,
and is empty operations are valid.
Depending on your language, stack may not be supported natively. You may simulate a stack by using a list or deque 
(double-ended queue), as long as you use only standard operations of a stack.
You may assume that all operations are valid (for example, no pop or peek operations will be called on an empty queue).
 */
class Queue {
public:
    // Push element x to the back of queue.
    stack<int> a;
    void push(int x) {
        a.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        stack<int> b;
        while(!a.empty())
        {
            b.push(a.top());
            a.pop();
        }
        b.pop();
        while(!b.empty())
        {
            a.push(b.top());
            b.pop();
        }
    }

    // Get the front element.
    int peek(void) {
        stack<int> b;
        while(!a.empty())
        {
            b.push(a.top());
            a.pop();
        }
        int ans = b.top();
        while(!b.empty())
        {
            a.push(b.top());
            b.pop();
        }
        
        return ans;
        
        
        
        
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return a.empty();
        
    }
};