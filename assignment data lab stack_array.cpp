#include <iostream> 
using namespace std; 

#define SIZE 10

void pause(); 

class stack { 
    private: 
    int q[SIZE]; 
    int in, out,top;
    bool is_empty, is_full; 

    // circular increment 
    int inc(int val);

    public: 
    stack(); 
    void push(int val);  // spell that as ... enq-ue-ue
    int pop();          // deq-ue-ue 

    void print_stack(); 
};

stack::stack() { 
    for (int i = 0; i < SIZE; i++) { 
        q[i] = 0; 
    }
    in = out = 0; 
    top = -1;
    is_empty = true; 
    is_full = false; 
}

int stack::inc(int val) { 
    if (val + 1 == SIZE)         // loop around 
        val = 0; 
    else 
        val += 1; 
    return val; 
}

void stack::push(int val) { 
    if (is_full) {
        throw "stack full. Cannot push ... "; 
        
    } 

    // put where in is and increment in 
    q[++top] = val;      
}

int stack::pop() { 
    if (is_empty) {
        throw "stack empty. Cannot pop ... "; 
    } 

    // get from where out is and inc out 
    int ret = q[top--]; 
    return ret;
}


void stack::print_stack() { 
    cout << "[\t"; 
    for (int i = 0; i < SIZE; i++)
        cout << q[i] << "\t"; 
    cout << "]" << endl; 

     

    

    

    pause(); 
}


int main() { 
    stack s1; 
    
    s1.print_stack();  

    s1.push(5); 
//    s1.print_stack();  
//
//    s1.push(11); 
//    s1.print_stack();  
//
//    s1.push(22); 
//    s1.print_stack();    
//
//    s1.push(33); 
//    s1.print_stack();    
//    
//    s1.push(44); 
//    s1.print_stack();    
//
//    // que.enqueue(55);          // uncomment and then change is_full 
//    s1.print_stack();    


    // return 0; 


//    try { 
//
//
//        // let's dequeue a few 
//        cout << endl << "Now dequeue ... " << endl; 
//        cout << "Got val: " << que.dequeue() << endl;   que.print_queue(); 
//        cout << "Got val: " << que.dequeue() << endl;   que.print_queue(); 
//        cout << "Got val: " << que.dequeue() << endl;   que.print_queue(); 
//        cout << "Got val: " << que.dequeue() << endl;   que.print_queue(); 
//
//        cout << "Got val: " << que.dequeue() << endl;    que.print_queue(); 
//        cout << "Got val: " << que.dequeue() << endl;    que.print_queue();      // doesn't work 
//
//
//    } catch (const char *msg) { 
//        cout << msg << endl; ; 
//    }

    return 0; 
}






void pause() {
    getchar(); 
}
