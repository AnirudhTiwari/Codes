#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<iostream>

using namespace std;

typedef struct TreeNode{
    struct TreeNode* left;
    struct TreeNode* right;
    int val;
}TreeNode;

void insert(TreeNode** root, int num){

    TreeNode* temp = *root;

    if(*root==NULL){

        TreeNode* new_node = (TreeNode*)malloc(sizeof(TreeNode));

        new_node->left = NULL;

        new_node->right = NULL;

        new_node->val = num;

        *root = new_node;

        return;

    }

    else if(num < temp->val)
        insert(&(temp->left),num);
    else
        insert(&(temp->right),num);
}

vector<int> preOrderTraversal(TreeNode* root, vector<int> v){

    if(root==NULL){
        v.push_back(-512321);
        return v;
    }

    else{
        v.push_back(root->val);
        preOrderTraversal(root->left, v);
        preOrderTraversal(root->right,v);
        return v;
    }

}

vector<int> revPreOrderTraversal(TreeNode* root, vector<int> v){

    if(root==NULL){
        v.push_back(-512321);
        return v;
    }

    else{
        v.push_back(root->val);
        revPreOrderTraversal(root->right, v);
        revPreOrderTraversal(root->left,v);
        return v;
    }

}

bool isSymmetric(TreeNode *root) {

    if(root==NULL){
        return true;
    }

    else{
        vector<int> left;
        vector<int> rite;

        left = preOrderTraversal(root->left, left);
        rite = revPreOrderTraversal(root->right, rite);

        for(int i=0;i<left.size();i++){
            cout << left[i];
        }
        cout << endl;

        for(int i=0;i<rite.size();i++){
            cout << rite[i];
        }
        cout << endl;
//        else{
  //          return false;
    }

}

int main(){

    TreeNode* root = NULL;
    insert(&root, 5);
    insert(&root, 10);
    insert(&root, 15);

    bool ans = isSymmetric(root);
    return 0;
}