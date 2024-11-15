// Problem_24 >> Validate Age Between 18 and 45
// Write a program to ask the user enter Age
// - If age is between 18 and 45 print "Valid Age" otherwise print "Invalid Age"

#include <iostream>
#include <string>
using namespace std;

int ReadAge ()
{
	int Age;
	cout << "Enter Your Age : ";
	cin >> Age;
	return Age;
}
bool Check_Valid_Age(int Age , int From , int To)
{
	return (Age >= From && Age <= To);
}

void PrintValideAge(int Age)
{
	if (Check_Valid_Age(Age, 18, 45))
	{
		cout << Age << "  Valid Age" << endl;
	}
	else
	{
		cout << Age << "  InValid Age" << endl;
	}
}

int main()
{
	PrintValideAge(ReadAge());
	return 0;
}
