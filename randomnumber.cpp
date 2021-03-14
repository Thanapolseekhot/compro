#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;
int main()
{
	int num=1,check;
	cout << "####Welcome to guessing number game####" << endl;
	srand(time(NULL));
		
		cout << "Secret number has been chosen" << endl;
		
	
			
			num =1+rand() % 10;
			for (int i = 0; i = num; i++) {
				for (int j = 1; i = num; j++) 
				{
					cout << "guess the number(1 to 10) :";
					cin >> check;
					if (check > num)
					{
						cout << "The secret number is lower" << endl;
					}
						else if (check < num)
						{
							cout << "The secret number is higher" << endl;
						}
						else if (check = num)
						{
							cout << "Congratulation!" << endl;
							cout << "The secret number is " << num << endl;
							cout << "You made " << j << " guesses" << endl;
							break;
						}
				}
				break;
				
			}
	return 0;
}
