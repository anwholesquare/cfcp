#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node (int x) {
        data =x;
        next = NULL;
        prev = NULL;
    }
};

Node* head;


void insertF (int x) {
    Node* newNode = new Node (x);
    if (head == NULL) {head = newNode;}
    else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertL (int x) {
    Node* newNode = new Node (x);
    if (head == NULL) { head = newNode; return;}
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
}

void deleteL () {
    if (head == NULL) {return;}
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    Node* tmp1 = tmp->prev;
    tmp1->next = NULL;
}
int main () {
    head = NULL;
    

    insertF(5);
    insertF(10);
    insertL(14);
    deleteL();

    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->data << endl;
        tmp = tmp->next;
    }


    return 0;
}