#include <iostream>
#include <string>
using namespace std;
int main()

{
float s,sa,C,t;
string Name;
cout <<"********** Homework2**********" <<endl;
cout << "Enter name \t: ";
cin >> Name;
cout << "Enter Salary \t: ";
cin >> s;
cout <<"Enter Sale \t: ";
cin>>sa;
cout<<"Enter Commission Percent :";
cin>>C;

cout<<"---------- output ----------" << endl;
cout<<"Your name = "<< Name <<endl;
cal_com( s, sa, C,t);
cout<<"Total Revenue :" << t <<"  Bath" << endl;
cout<<"----------------------------" <<endl;

return (0);
}
float cal_com(float s,float sa,float C,float t)
{
	t=s+((sa/100)*C);
	return(s,sa,C);
}