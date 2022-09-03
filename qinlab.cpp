#include<iostream>
using namespace std;
struct queue{
	int val;
	queue *next;
};
queue* create_queue(queue *p, int value){
	queue *tmp = new queue;
	tmp->val = value;
	tmp->next = NULL;
	p->next = tmp;
	return tmp;



}
void output_queue(queue *h) { 
    queue *current = h; 
    cout << "[ " ; 
    while (current != NULL) { 
        cout << current->val << " "; 

        current = current->next; 
    }
    cout << "]" << endl; 
}

	
	
	
	
	

int main(){
	queue *head;
	head->val = 1;
	head->next = NULL;
	queue *current = head;
	current = create_queue(current, 2);
	current = head;
	output_queue(head);
	
	
	
	
	return 0;
}
