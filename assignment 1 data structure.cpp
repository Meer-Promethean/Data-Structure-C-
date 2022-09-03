        #include<iostream>
using namespace std;

int get(int index,int *p1 ){
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

int update(int val,int *current,int *array){
	int *p1 = array;
	
	for(int i = 0;i<sizeof(p1);i++){
		if(p1 == current){
			*p1 = val;
			break;
		}
		p1++;
		
	}
	cout<<*p1<<endl;
	
}





int main(){
	
	int balance[5];
    int *p;

    p = balance;
  
    cout << "Enter Array values " << endl;
   
	for ( int i = 0; i < 5; i++ ) {
      
		int a;
		cin >> a;
		*(p+i) =a;
   }
   //int val;
	//val = get(3,balance);
	//cout<<val<<endl; 
	int val2 = 5;
	int *current = &balance[4];  
   	update(val2,current, balance);
	return 0;
	
}
