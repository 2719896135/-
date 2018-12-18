#include<iostream></iostream>
#include<windows.h></windows.h>
#include<time.h></time.h>
using namespace std;
int h1,m1,s1,h,m,s,fk,o; 
class Clock{
    public:
        Clock(short h=0,short m=0,short s=0):h(h),m(m),s(s){
        }
        void displayTime();
    private:
        short h;
        short m;
        short s;
};void Clock::displayTime(){
    while(true){
        cout<<h<<':'<<m<<':'<<s<<"   ";
        Sleep(1000);
        cout<<'\r';
        if(h==h1&&m==m1&&s+1==s1)	fk=MessageBox(GetForegroundWindow(),"时间到，延迟五分钟？","闹钟",1);
        if(h==h1&&m==m1-1&&s==59&&s1==0)	fk=MessageBox(GetForegroundWindow(),"时间到,延迟五分钟","闹钟？",1);
		if(fk==IDOK&&o==0)
		{
			m1+=5;
			o++;
		}	
		if(fk==IDCANCEL)	return;
		if(!(s=++s%60))
            if(!(m=++m%60))
                h=++h%24;
    }
} int main()
{
	cout<<"输入(小时 分钟 秒):";
	cin>>h1>>m1>>s1;
	time_t tt = time(NULL);
 	tm* t= localtime(&tt);
 	h=t->tm_hour;
 	m=t->tm_min;
 	s=t->tm_sec;
    Clock A(h,m,s);
    A.displayTime();
    return 0;
}
