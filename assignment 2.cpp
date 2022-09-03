#include<iostream>
using namespace std;
struct node{
	int value;
	node *next;
};
node* creat_new_node(node *current,int val){
	node *n;
	n = new node;
	n->value = val;
	n->next = NULL;
	current->next = n;
	return n;
}
void print_list(node *head){
	node *current;
	current = head;
	cout<<"[";
	while(current != NULL){
		cout<<current->value<<" ";
		current = current->next;
	}
	cout<<"]"<<endl;
	
}

node* InsertNth(node *head, int val, int position)
{
    node *add = new node;
    add->value = val;
    add->next = NULL;
    
    if(head == NULL)
        head = add;
    if(position == 0)
    {
        add->next = head;
        head = add;
    }
    else
    {
        node *current = head;
        int d = 1;
        while(current != NULL)
        {
            if(d == position)
            {
                add->next = current->next;
                current->next = add;
                break;
            }
            current = current->next;
            d++;
        }
    }
    return head;
}

void deleteNode(node *head, int position) 
{ 
  
   if (*head_ref == NULL){
   	cout<<"your list is empty"
   	return;
   }  
	
   
    node* temp = *head; 

    if (position == 0) 
    { 
        *head = temp->next;   
        delete temp;           
        return; 
    } 
  
    // Find previous node of the node to be deleted 
    for (int i=0; temp!=NULL && i<position-1; i++)
	 
         temp = temp->next; 
  
    // If position is more than number of ndoes 
    if (temp == NULL || temp->next == NULL) 
         return; 
         
// Node temp->next is the node to be deleted 
    // Store pointer to the next of node to be deleted 
    node *next = temp->next->next; 
  
    // Unlink the node from linked list 
    delete temp->next;  // Free memory 
  
    temp->next = next;  // Unlink the deleted node from list 
} 












int length_list(node *current){
	int count = 1;
	while(current->next != NULL){
		count ++;
	}
	return count;
}

int get(int index,node *p1 ){
	int *p2;
	p2 = &index;
	
	for(int i = 0;i<sizeof(p1); i++){
		if(*p1 == *p2){
			return *p2;
			break;
		}
		p1++;
	
		
	}
	
}



bool search(node* head, int val)  
{  
    node* current = head; // Initialize current  
    while (current != NULL)  
    {  
        if (current->value == x)  
            return true;  
        current = current->next;  
    }  
    return false;  
}  




int main(){
	node *head;node*current;
	head = new node;
	head->value = 1;
	head->next = NULL;
	current = head;
	current = creat_new_node(current,2);
	current = creat_new_node(current,3);
	current = creat_new_node(current,4);
	print_list(head);
	
	
	return 0;
}
