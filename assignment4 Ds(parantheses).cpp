#include<iostream>
#include<stack>
#include<string>
using namespace std; 
bool ArePair(char opening,char closing)
{
	if(opening == '(' and closing == ')') return true;
	else if(opening == '{' and closing == '}') return true;
	else if(opening == '[' and closing == ']') return true;
	return false;
}
bool AreParanthesesBalanced(string exp)
{
	stack<char>  S;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' or exp[i] == '{' or exp[i] == '[')
			S.push(exp[i]);
		else if(exp[i] == ')' or exp[i] == '}' or exp[i] == ']')
		{
			if(S.empty() or !ArePair(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true:false; //ternery opperator
}

int main()
{
	
	string expression;
	cout<<"Enter an expression:  "; 
	cin>>expression;
	if(AreParanthesesBalanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}
