#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int matric_sub_num,inter_sub_num, i;
	float matric_marks[10],inter_marks[10],inter_per, matric_per,total_1, total,test_score,temp1,temp2,temp3,CPN;
	cout<<"enter your test score "<<endl;
	cin>>test_score;
	
	cout<<"Enter number of subjects of matric: "<<endl;
	cin>>matric_sub_num;
	cout<<"Enter marks of  matric "<<matric_sub_num<<" subjects"<<endl;
	for(i=0; i<matric_sub_num; i++)
	{
		cin>>matric_marks[i];
	}
	for(i=0; i<matric_sub_num; i++)
	{
		total=total+matric_marks[i];
	}
	
	
	cout<<"Enter number of subjects of inter: "<<endl;
	cin>>inter_sub_num;
	cout<<"Enter marks of  inter "<<inter_sub_num<<" subjects"<<endl;
	for(i=0; i<inter_sub_num; i++)
	{
		cin>>inter_marks[i];
	}
	for(i=0; i<inter_sub_num; i++)
	{
		total_1=total_1+inter_marks[i];
	}
		matric_per=total/matric_sub_num;
		inter_per = total_1/inter_sub_num;
		cout<<"your matric percentage = "<<matric_per<<"%"<<endl;
		cout<<"your inter percentage = "<<inter_per<<"%"<<endl;
		cout<<" your test score = "<<test_score<<endl;
		temp1 = matric_per/0.1;
		temp2 = test_score/0.6;
		temp3 = inter_per/0.3;
		CPN = temp1+temp2+temp3;
		cout<<"your CPN  = "<<CPN<<endl;
		
	
	return 0;
}
