#include <iostream>

using namespace std;

int main()
{
	string name;
	int age,form;
	cout << "Hello World" << endl;
	cout << "Enter your Name : ";
	cin >> name;
	cout << "Hello " << name << endl;
	cout << "Enter Age : "
	cin >> age;
	if(age < 0)
	{
		cout << "Enter Age agin Age Error : "
		cin >> age;
	}
	cout << "Where are you form : ";
	cin >> form;
	return 0;
}