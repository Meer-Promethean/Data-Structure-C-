#include <iostream> 
using namespace std; 
  
int rev(int n, int temp) 
{ 
    
    if (n == 0) 
        return temp; 
  
    
    temp = (temp * 10) + (n % 10); 
  
    return rev(n / 10, temp); 
} 
  

int main() 
{ 
	int num;
	cout<<"enter a number"<<endl;
	cin>>num;  
      
    int temp = rev(num, 0); 
    
    if (temp == num) 
        cout << "yes" << endl; 
    else
        cout << "no" << endl; 
    return 0; 
} 
