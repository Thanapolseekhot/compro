#include <iostream>
#include <string>
using namespace std;
int main()
{
string Name;
int s,sa,C;
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
cout<<"Total Revenue :" << s+((sa/100)*C) <<"  Bath" << endl;
cout<<"----------------------------" <<endl;

return (0);
}