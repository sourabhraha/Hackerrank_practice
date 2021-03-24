//  Lowest Common Ancestor
// Solution is based on the following thought: 
// The value of a common ancestor has to always be between the two values in question.
#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
};
Node* root = NULL;

void insertnode(int value){
    Node *temp,*t;
    temp = (Node*)malloc(sizeof(Node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    if(root == NULL)
        root = temp;
    else{
        t = root;
        while(t!=NULL){
            if(t->data > temp->data){
                if(t->left == NULL){
                    t->left = temp;
                    t = t->left;
                }
                t = t->left;
            }
            else if(t->data < temp->data){
                if(t->right == NULL){
                    t->right = temp;
                    t = t->right;
                }
                t = t->right;
            }
        }
    }


}

void algo(int value1, int value2){
    while(root!=NULL){
        if(root->data > value1 && root->data >> value2)
            root = root->left;
        else if(root->data < value1 && root->data < value2)
            root = root->right;
        else
            break;

    }
    cout<<root->data;

}


int main(){
    int value,n,v1,v2;
    cin>>n;
    while(n--){
    cin>>value;
    insertnode(value);
    }
    cin>>v1>>v2;
    algo(v1,v2);

}