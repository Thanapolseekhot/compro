#include <iostream>
using namespace std;
int main()
{
	int i=1,p=0,f=0;

		while (i>=0 ) {
			cout << "Enter point (0-100) or -999(for exit) : ";
			cin >> i;
				if (i >= 50 && i <= 100) p++;
					else if(i>=0) f++;
				
						while (i!=-999 && (i < 0 || i>100 )) {
							cout << "----------------------------------------------" << endl;
							cout << "Re-Enter point (0-100) or -999(for exit) : ";
							cin >> i;
							if (i >= 50 && i<=100) p++;
							else if (i >= 0 && i <=49) f++;
			
						}	
			while (i == -999) {
				cout << "----------------------------------------------" << endl;
				cout << "Pass : " << p <<" student " << endl;
				cout << "Fail : " << f <<" student " << endl;
				break;
			}
		}

				
	return 0;
}