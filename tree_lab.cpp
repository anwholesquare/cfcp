#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left = NULL;
    Node* right = NULL;
};
class BinTree {
    public:
    Node* root = NULL;

    
    Node* create_node (int item) {
        Node* new_node = new Node;
        new_node->data = item;
        new_node->left = NULL;
        new_node->right = NULL;
        return new_node;
    }

    void set_root(int item ) {
        root = NULL;
        root = create_node(item);
    }
    Node* add_left_child (Node* parent, Node* child) {
        parent->left=child;
        return child;
    }
    Node* add_right_child (Node* parent, Node* child) {
        parent->right=child;
        return child;
    }
    Node* create_tree() {
        root = new Node;
        root->data = 2;
        Node* cl7 = new Node; cl7->data = 7;
        Node* cl9 = new Node; cl9->data = 9;
        Node* cl1 = new Node; cl1->data = 1;
        Node* cl6 = new Node; cl6->data = 6;
        Node* cl8 = new Node; cl8->data = 8;
        Node* cl5 = new Node; cl5->data = 5;
        Node* cl10 = new Node; cl10->data = 10;
        Node* cl3 = new Node; cl3->data = 3;
        Node* cl4 = new Node; cl4->data = 4;
        add_left_child(root, cl7);
        add_right_child(root, cl9);

        add_left_child(cl7, cl1);
        add_right_child(cl7, cl6);


        add_right_child(cl9, cl8);
        
        add_left_child(cl8, cl3);
        add_right_child(cl8, cl4);

        add_left_child(cl6, cl5);
        add_right_child(cl6, cl10);


        return root;
    }

    void printPreOrder (Node* parent) {
        if (parent != NULL) {
            cout << parent->data << endl;
            printPreOrder(parent->left);
            printPreOrder(parent->right);
        }
    }


 };
pair<Node*, Node*> add_child (Node* tmp, Node* tmp_left, Node* tmp_right, BinTree &bt) {
    int x;
    bool f =0, l = 0, r= 0;
    cout << "Do you have childrens for " << tmp->data << "?"  << endl;
    cin >> f;
    if (f) {
        cout << "Do you have left child for " << tmp->data << "?"  << endl;
        cin >> l;
        if (l) {
            cout << "Add a left node: ";
            cin >> x;
            tmp_left = bt.add_left_child(tmp, bt.create_node(x));
        }else {tmp_left = NULL;}
         cout << "Do you have right child for " << tmp->data << "?"  << endl;
        cin >> r;
        if (r) {
            cout << "Add a right node: ";
            cin >> x;
            tmp_right = bt.add_right_child(tmp, bt.create_node(x));
        }else {tmp_right = NULL;}
    }
    return make_pair(tmp_left, tmp_right);
    
}

int main () {
    BinTree bt;

    cout << "Set a root: ";
    int x;
    cin >> x;
    bt.set_root(x);

    
    pair<Node*, Node*> tm;
    tm.first = NULL;
    tm.second = NULL;

    while (tm.first != NULL || tm.second != NULL) {
        if (tm.first != NULL) {
            
        }
    }



    return 0;
}