#include<iostream>
#include<string>
using namespace std; 

int main() 
{
	int counter = 0; 
	string students; 
	char choice; 
	cout << "My Program: " << endl; 
	do
	{
		string currentName;
		//loop body
		cout << "Enter Name: ";
		getline(cin, currentName);
		cin.ignore();

		students.append(currentName);
		students.append("\n");
		counter++;
		cout << "To Continue Enter Choice Y/y: ";
		cin >> choice; 
		cin.ignore();
	} while (choice == 'Y' || choice == 'y');

	cout << "The list of all "<<counter<<" the Students : \n" << students;

	system("pause");
	return 0; 
}