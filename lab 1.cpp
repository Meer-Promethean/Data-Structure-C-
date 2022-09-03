#include<iostream>
using namespace std;
struct node{
	int val;
	int *next;
};

node* insert(node* head,int value,int position){
	node* temp;
	temp = new node;
	int count = 1;
	if(position == 0){
		temp->val = value;
		temp->next = head;
		return temp;
	}
	if(position == 1){
		while(temp != NULL){
			
			temp++;
		}
		temp->val = val;
		temp->next = head;
			
			
		
		
	}

		
	
	
	
	
}



int main(){
	node *head = new node;
//	head->val = 1;
//	head->next = NULL;
	node* current = head;
	int val = 2;
	int position = 0;
	insert_node(current, val, position);
	
	
	
	
	
	
	
	return 0;
}
