#include<iostream>
using namespace std;
struct node{
	int val;
	node *next;
};
class list{
	private:
		node *head;
		node *current;
	public:
		list(){
			head = current = NULL;
		}
		void create_node(int value){
			node *p = new node;
			p->val = value;
			p->next = NULL;
			if(head == NULL){
				head = p;
				current = p;
			}
			else{
				current->next = p;
				current = current->next;
			}
		}
		void print_list(){
			node *temp = head;
			cout<<"[";
			while(temp != NULL){
				cout<<temp->val<<" ";
				temp = temp->next;
			}
			cout<<"]"<<endl;
		}
		
		
};
int main(){
	list l1;
	l1.create_node(1);
	l1.create_node(2);
	l1.create_node(3);
	l1.print_list();
	
	return 0;
}
