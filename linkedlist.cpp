#include <bits/stdc++.h>
using namespace std;


template<class T>
class Node {
public:    
    T data;
    Node<T>* prev;
    Node<T>* next;
    Node () {
        data = 0;
        prev = NULL;
        next = NULL;
    }

    Node (T _data) {
        data = _data; 
        prev = NULL;
        next = NULL;
    }
};

template <class T>
class LinkedList {
public:
    Node<T>* head;
    Node<T>* lastNode;
    int _size;
    LinkedList() {
        head = new Node<T>();
        lastNode = head;
        _size = 0;
    }
    void push_back (T _data) {
        Node<T>* new_node = new Node<T>(_data);
        new_node->prev = lastNode;
        new_node->next = NULL;
        lastNode->next = new_node;
        lastNode = new_node;
        _size++;
    }
    Node<T>* getNode (int idx) {
        idx = idx % _size;
        Node<T>* traverseNode = (head->next);
        while (idx--) {
            traverseNode = traverseNode->next;
        }
        return traverseNode;
    }

    void remove(int idx) {
        Node<T>* deletingNode = getNode(idx);
        Node<T>* prevNode = deletingNode->prev;
        Node<T>* nextNode = deletingNode->next;
        prevNode->next = nextNode;
        if (nextNode != NULL) {
            nextNode->prev = prevNode;
        }
        _size--;
    }

    T get (int idx) {
        Node<T>* node = getNode(idx);
        return node->data;
    }

    void print () {
        cout << "Linkedlist value: ";
        Node<T>* traverseNode = (head->next);
        while (traverseNode != NULL) {
            cout << traverseNode->data << " ";
            traverseNode = traverseNode->next;
        }
        cout << endl;
    } 
    int size() {
        return _size;
    }
};

int main () {
    LinkedList<int> ls;
    srand(time(0));
    for (int i =0; i<10; i++) {
        ls.push_back(rand() % 100);
    }
    ls.print();
    ls.remove (2);
    ls.print();
    return 0;
}