#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3;
	double s;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	//S=1/2[(x1y2-x2y1)+(x2y3-x3y2)+(x3y1-x1y3)]面积公式 
	s=((x1*y2-x2*y1)+(x2*y3-x3*y2)+(x3*y1-x1*y3))/2;
	printf("%.2lf",abs(s));
	return 0;
}
//	//另一种方法，没有成功。 
//	//s=根号下：p(p-a)(p-b)(p-c) 其中p=1/2(a+b+c)（海伦公式）
//	double a,b,c;
//	a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
//	b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
//	b=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
//	double p=1/(2*a*b*c);
//	s=sqrt(p*(p-a)*(p-b)*(p-c));
