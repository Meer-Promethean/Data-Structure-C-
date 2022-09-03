#include <iostream>
using namespace std;

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    
    void printlist(){
    	node *current = head;
    	while(current != NULL){
    		cout<<current->data<<" ";
    		current = current->next;
		}
    	
	}
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.printlist();
    return 0;
}
