#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	struct node* next;
	int num;

}node;

void insert(node** start, int value){

	node* temp = *start;

	node* new_node = (node*)malloc(sizeof(node));

	new_node->num = value;

	new_node->next = NULL;

	if(temp==NULL){
		*start = new_node;
	}
	else{
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = new_node;
	}
}

void print_list(node** start){

	node* temp = *start;

	while(temp->next!=NULL){

		printf("%d\n", temp->num);
		temp = temp->next;
	}
	printf("%d\n", temp->num);
}

int main(){

	int i;

//Start and the end node.
	node* start = NULL;

//	start = (node*)malloc(sizeof(node));

//Inserts the first 10 numbers in the linked list.
	for(i=0;i<10;i++){
		insert(&start,i);
	}

	print_list(&start);
//Prints the values in the list.
}