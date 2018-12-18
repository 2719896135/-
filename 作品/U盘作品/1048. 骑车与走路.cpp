#include<iostream>
#include<iomanip>
using namespace std;
double n;
int main()
{
	cin>>n;
	if(n/3.0+50>n/1.2)	cout<<"Walk";
	else if(n/3.0+50<n/1.2)	cout<<"Bike";
	else cout<<"All";
	return 0;
}
