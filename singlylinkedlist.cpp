#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node (int x) {
        data = x;
        next = NULL;
    }
};

class Stack {
    public:
    Node* head;
    Stack () {
        head = NULL;
    }
    void push (int x) {
            Node* node = new Node (x);
            node->next = head;
            head = node;
    }
    void pop () {
        if (head != NULL) head = head->next;
    }
    int size () {
        Node* tmp = head;
        int cnt = 0;
        while (tmp != NULL) {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    bool empty () {
        if (head == NULL) return 1;
        else return 0;
    } 
    int top () {
        if (empty()) return INT_MIN;
        return head->data;
    }

    void clear() {
        head = NULL;
    }
};


class Queue {
    public:
    Stack st1, st2;
    void push (int x) {
    
        while (!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while (!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }
        
    }
    int front () {
        return st1.top();
    }

    void pop() {
        st1.pop();
    }
    int size() {
        return st1.size();
    }
    bool empty () {
        return st1.empty();
    }
};
int main () {
    Queue st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);


    //cout << st.size() << endl;
    while (!st.empty()) {
        cout << st.front() << endl;
        st.pop();
    }

    return 0;
}