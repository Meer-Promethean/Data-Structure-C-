#include <iostream> 
using namespace std; 

#define SIZE 10

void pause(); 

class Queue { 
    private: 
    int q[SIZE]; 
    int in, out; 
    bool is_empty, is_full; 

    
    int inc(int val);

    public: 
    Queue(); 
    void enqueue(int val);  
    int dequeue();           

    void print_queue(); 
};

Queue::Queue() { 
    for (int i = 0; i < SIZE; i++) { 
        q[i] = 0; 
    }  
    in = out = 0; 
    is_empty = true; 
    is_full = false; 
}

int Queue::inc(int val) { 
    if (val + 1 == SIZE)         
        val = 0; 
    else 
        val += 1; 
    return val; 
}

void Queue::enqueue(int val) { 
    if (is_full) {
        cout<< "Queue full. Cannot enqueue ... "; 
        
    } 

    
    q[in] = val; 
    in = inc(in); 

    if (in == out) 
        is_full = true; 
    
    
    is_empty = false;       
}

int Queue::dequeue() { 
    if (is_empty) {
        cout<< "Queue empty. Cannot dequeue ... "; 
    } 

    int ret = q[out]; 
    out = inc(out); 
    if (in == out) 
        is_empty = true; 

     
    is_full = false;       

    return ret; 
}


void Queue::print_queue() { 
    cout << "[\t"; 
    for (int i = 0; i < SIZE; i++)
        cout << q[i] << "\t"; 
    cout << "]" << endl; 

   
}


int main() { 
    Queue que; 
    
    que.print_queue();  

    que.enqueue(5); 
    //que.print_queue();  

    que.enqueue(11); 
   // que.print_queue();  

    que.enqueue(22); 
   // que.print_queue();    

    que.enqueue(33); 
   // que.print_queue();    
    
    que.enqueue(44); 
   // que.print_queue();    

     
    que.enqueue(55);
   // que.print_queue();
    
    que.enqueue(55);
  //  que.print_queue();
    
    que.enqueue(55);
//    que.print_queue();
    que.enqueue(55);
 //   que.print_queue();
    que.enqueue(55);
    int val;
    que.print_queue();
    val = que.dequeue();
    cout<<val<<endl;
    que.dequeue();
    que.print_queue();
    que.dequeue();
 
    return 0; 
}
