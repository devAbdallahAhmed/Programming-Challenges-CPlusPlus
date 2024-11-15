// Problem_12 >> Write a program to ask the user to enter : (Number1 , Number2) , Then print the max Number.

#include <iostream>
using namespace std;

void Read_Numbers(float &Number1, float &Number2)
{
	cout << "Enter Number 1 : ";
	cin >> Number1;

	cout << "Enter Number 2 : ";
	cin >> Number2;
}

float Max_Number(float Number1, float Number2)
{
	if (Number1 > Number2)
		return Number1;
	else
		return Number2;
}

void PrintMaxNumber(float Max_Num)
{
	cout << "The Max Of Number is : " << Max_Num << endl;
}


int main()
{
	float Number1, Number2;
	ReadNumbers(Number1, Number2);
	PrintMaxNumber(Max_Number(Number1, Number2));
	return 0;
}
