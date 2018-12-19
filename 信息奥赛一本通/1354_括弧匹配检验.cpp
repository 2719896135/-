#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
	string s;
	stack <char> n;
	getline(cin,s);
	//cout<<endl<<s<<endl;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(' || s[i]=='<' || s[i]=='[' || s[i]=='{')
		{
			n.push(s[i]);
			continue;
		}
//		if(s[i]==')')
//		{
//			if(n.empty()==false)
//				n.pop();
//			else
//			{
//				cout<<"Wrong";
//				return 0;
//			}
//		}
		if(s[i]==')' || s[i]=='>' || s[i]==']' || s[i]=='}')
			if(n.empty()==true)
			{
				cout<<"Wrong";
				return 0;
			}
		if(s[i]==')')
		{
			if(n.top()=='(')
				n.pop();
			else
			{
				cout<<"Wrong";
				return 0;
			}
			continue;
		}
		if(s[i]=='>')
		{
			if(n.top()=='<')
				n.pop();
			else
			{
				cout<<"Wrong";
				return 0;
			}
			continue;
		}
		if(s[i]==']')
		{
			if(n.top()=='[')
				n.pop();
			else
			{
				cout<<"Wrong";
				return 0;
			}
			continue;
		}
		if(s[i]=='}')
		{
			if(n.top()=='{')
				n.pop();
			else
			{
				cout<<"Wrong";
				return 0;
			}
			continue;
		}
	}
	if(n.empty()==true)
		cout<<"OK";
	else
		cout<<"Wrong";
	return 0;
}
