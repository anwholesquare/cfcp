#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node (int x) {
        data = x;
        next =NULL;
    }
};

class LinkedList {
    public:
    Node* head;
    LinkedList () {
        head = NULL;
    }
    void push(int x)
    {
        Node* node = new Node (x);
        if (head == NULL) {
            head = node;
        }else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = node;
        }
    }
    int get( int idx ) {
        Node* temp = head;
        int c = 0;
        while (temp != NULL) {
            if (c == idx) return temp->data;
            temp = temp->next;
            c++;
        }
        return -1;
    }
    void print () {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
        
    }
    int size() {
        int c =0;
        Node* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            c++;
        }
        return c;
    }
};


int main () {
    LinkedList L;
    LinkedList R;
    LinkedList V;

    L.push(1);
    L.push(2);
    L.push(3);
    L.push(INT_MAX);

    R.push(2);
    R.push(5);
    R.push(7);
    R.push(INT_MAX);

    L.print();
    R.print();

    int n = L.size();
    int m = R.size();
    int i =0, j= 0, k=0;

    for (k=0; k < m+n-2; k++) {
        int x = L.get(i);
        int y = R.get(j);
        if (x < y) {
            V.push(x);
            i++;
        }else {
            V.push(y);
            j++;
        }
    }

    V.print();


    return 0;
}