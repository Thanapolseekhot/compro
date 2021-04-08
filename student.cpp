#include <iostream>
#include <string>
using namespace std;
void ListStudent(string name[30],float score[20],int num);
float average(float num[50], int);
char Calgrade(float score);
int main()
{
	int i, num;
	float score[50];
	string name[30];
	cout << "Input number of Students : ";
	cin >> num;
	for (i = 0; i < num; i++)
	{
		cout << "Enter name"<<i+1<<":";
		cin >> name[i];
		cout << "Enter score " << i + 1 << ":";
		cin >> score[i];
	}
	
	ListStudent(name, score, num);
	
	return 0;
}
void ListStudent(string name[30], float score[20],int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << "Student Name" << i + 1 << ":" << name[i] << "\tScore" << i+1 <<":"<<score[i]<<" Your grade is "<< Calgrade(score[i])<<endl;
		
	}
}
char Calgrade(float score)
{
	char grad;
	if (score >= 80) {
		grad = 'A';
	}
	else if (score >= 70) {
		grad = 'B';
	}
	else if (score >= 60) {
		grad = 'C';
	}
	else if (score >= 50) {
		grad = 'D';
	}
	else cout << "Enter Score 50-100 ";

	return grad;
}
