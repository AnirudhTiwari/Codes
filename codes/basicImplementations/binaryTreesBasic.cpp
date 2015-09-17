#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<iostream>

using namespace std;

typedef struct node{
	struct node* left;
	struct node* right;
	int value;
}node;


void insert(node** root, int num){

	node* temp = *root;

	if(*root==NULL){

		node* new_node = (node*)malloc(sizeof(node));

		new_node->left = NULL;

		new_node->right = NULL;

		new_node->value = num;

		*root = new_node;

		return;

	}

	else if(num < temp->value)
		insert(&(temp->left),num);
	else
		insert(&(temp->right),num);
}

int preOrderTraversal(node** root, int depth){

	node* temp = *root;

	if(temp!=NULL){
		depth+=1;
		printf("Value is %d &", temp->value);
		printf(" the depth is %d\n", depth);

		preOrderTraversal(&(temp->left), depth);
		preOrderTraversal(&(temp->right), depth);
	}
	else
		return depth;
}

void prnt_queue(queue<int> q){

	while(q.size()!=0){
		cout<< q.front() << ", ";
		q.pop();
	}
	cout << endl;
}
void levelOrderTraversal(node** root){


	if(*root==NULL)
		return;

	queue<node*> cue;

	while(1){

		if(cue.size()==0){
			cue.push(*root);
		}
		int node_count = cue.size();

		while(node_count>0){
			node *root = cue.front();

			cout << root->value << ' ';

			cue.pop();

			if(root->left!=NULL)
				cue.push(root->left);


			if(root->right!=NULL)
				cue.push(root->right);

			node_count-=1;
		}

		cout << endl;
		if(cue.size()==0)
			break;

	}


}

int main(){

	node* root = NULL;
	insert(&root, 5);
	insert(&root, 10);
	insert(&root, 15);
	insert(&root, 7);
	insert(&root, 3);
	insert(&root, 16);
	insert(&root, 1);
	insert(&root, 4);
	insert(&root, 0);

	queue<int> q;



	int depth = 0;

//	depth = preOrderTraversal(&root,depth);

	int level = 0;

	levelOrderTraversal(&root);
}