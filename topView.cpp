#include<bits/stdc++.h>
using namespace std;
class Node {
    public: 
        int data;
        Node *left, *right;
        Node(int key) {
            data=key;
            left = NULL;
            right= NULL;
        }
        Node* createNode(int key);
};
void topView(Node * root, int h, map< int,vector<int> > & m) {
    if(root == NULL) return ;
    m[h].push_back(root->data);
    topView(root->left, h-1,m);
    topView(root->right, h+1,m);

}

int main(){
    Node * root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->right = new Node(6);
    root->right->left = new Node(14);

    map<int, vector<int> > m;
    int h= 0;
    topView(root,h,m );
    for(auto x : m) {
        cout<<x.second[0]<<" ";
    }

    return 0;

}