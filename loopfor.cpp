#include<iostream>
#include<string>
using namespace std;
int main()
{
	int np,i;
	float h, w;
	string n, b;
	
	cout << "Enter number of Person :";
	cin >> np;
	for (i = 1; i <= np; i++) {
		cout << "--------------------------" << endl;
		cout << "Enter name " << i << ":";
		cin >> n;
		cout << "Enter weight " << i << ":";
		cin >> w;
		cout << "Enter height " << i << ":";
		cin >> h;
		float h2=h/100;
		float Bmi = w / (h2 * h2);
		if (Bmi >= 40.1) b = "Obese class 3";
			else if (Bmi >= 35.1) b = "Obese class 2";
				else if (Bmi >= 30.1) b = "Obese class 1";
					else if (Bmi >= 25.1) b = "Overweight";
						else if (Bmi >= 18.51) b = "Normal";
							else if (Bmi >= 17.01) b = "Mild Thinness";
								else if (Bmi > 16) b = "Moderate Thinness";
									else if (Bmi < 16) b = "Severe Thinness";			
		cout << "BMI" << i << " = " << Bmi << endl;
		cout << "You category of BMI is " << b << endl;
	}
	
	return(0);
}