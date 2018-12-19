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
	for(int i=0;i<s.length() && s[i]!='@';i++)
	{
		if(s[i]=='(')
		{
			n.push(s[i]);
			continue;
		}
		if(s[i]==')')
		{
			if(n.empty()==false)
				n.pop();
			else
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	if(n.empty()==true)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
