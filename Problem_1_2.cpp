//Problem_2 >> Write a program to ask the user to enter his / hir name and print it on screen

#include <iostream> 
#include <string>

using namespace std;

string ReadYou_Name()
{
	string You Name;

	cout << "Enter You Name : ";
	getline(cin, You Name);
	return You Name;
}

void PrintYou_Name(string You Name)
{
	cout << "************************\n";
	cout << "You  Name is : " << You Name << endl;
}

int main()
{
	PrintYourName(ReadYourName());
}
