#include <iostream>
using namespace std;
class stack{
	private:
		int size[10];
		int top = -1;
		bool is_empty,is_full;
		
	public:
		stack(){
		
			int *head;
			
		}
		
		void push(int val){
			if(!s.IsEmpty()){
				s[++top] = val;
				
			}
			else{
				cout<<"overfellow"<<endl;
			}
		}
		int pop(){
			if(! is_empty){
				return s[top--];
			}
			else{
				cout<<"underfellow"<<endl;
				return -1;
			}
		}
};






int main(){
	stack s1;
	s1.push(2);
	
	
	return 0;
}
