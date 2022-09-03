#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
class train{
	private:
	
		static const int queue_num = 2;
		queue<int> q[queue_num];
		static const int num=9;
		int check = 1;
		int arr[num]={5,8,1,7,4,2,9,6,3};
	public:
		void show(int &check);
		bool hold(int a);
		void check_direct();
		
	};
	
	
	void train::check_direct()
	{
		for(int i=num-1;i>=0;i--)
		{
			if (arr[i] == check)
			{
				cout<<"car attchecd directed "<<arr[i]<<" to the train"<<endl;
				check++;
				show(check);
			}
			else{
				hold(arr[i]);
			}
		}
	}
	
	void train::show(int &check)
		{
			for(int i=0;i<queue_num;++i)
			{
				if (!q[i].empty() && q[i].front() == check)
				{
					cout<<"car holding "<<q[i].front()<<" to output"<<endl;
					q[i].pop();
					check ++;
					i=-1;		
				}
			}
		}
	bool train::hold(int a)
		{
			for (int i=0;i<queue_num;++i)
			{
				if(q[i].empty() || (!q[i].empty() && q[i].back() < a))
				{
					cout<<"stack "<<i<<" hold car " << a  << endl;
                    q[i].push(a);
                    return true;
				}
				
			}
			return false;
		}
		

int main(){
	train t;
	t.check_direct();	
	return 0;
}
