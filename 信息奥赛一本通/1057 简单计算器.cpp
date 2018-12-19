#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c;
	char o;
	cin>>a>>b>>o;
	switch (o)
	{
		case '+':
		{
			c=a+b;
			break;
		}
		case '-':
		{
			c=a-b;
			break;
		}
		case '*':
		{
			c=a*b;
			break;
		}
		case '/':
		{
			if(b==0)
			{
				cout<<"Divided by zero!";
				return 0;
			}
			c=a/b;
			break;
		}
		default :
		{
			cout<<"Invalid operator!";
			return 0;
		}
	}
	cout<<c;
	return 0;
}
