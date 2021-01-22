#include <iostream>
#include <string>
using namespace std;
void add(int,int);//declare
void sub(int,int);
void multi(int,int);
void devide(int,int);
int main()
{
	int a,b;
	cout<<"enter a :";
	cin>>a;
	cout<<"enter b :";
	cin>>b;
	add(a,b);
	sub(a,b);
	multi(a,b);
	devide(a,b);
	return (0);
}
void add(int a,int b)
{
	cout<<"TOTAL :"<<a+b<<endl;
}
void sub(int a,int b)
{
	cout<<"TOTAL :"<<a-b<<endl;
}
void multi(int a,int b)
{
	cout<<"TOTAL :"<<a*b<<endl;
}
void devide(int a,int b)
{
	cout<<"TOTAL aq :"<<a/b<<endl;
}
