// Problem_10 >> Write a program to ask the user to enter : Mark1 , Mark2 , Mark3 Then print the average of entered Marks

#include <iostream>
using namespace std;

void ReadMark(float & Mark1 ,float & Mark2, float & Mark3)
{

	cout << " Please Enter Mark 1 : ";
	cin >> Mark1;

	cout << "Please Enter Mark 2 : ";
	cin >> Mark2;

	cout << "Please Enter Mark 3 : ";
	cin >> Mark3;
}

float SumMark(float Mark1, float Mark2, float Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float AvergeCalc(float Mark1, float Mark2, float Mark3)
{
	return SumMark(Mark1, Mark2, Mark3) / 3;
}

void PrintResutAverge(float Result)
{
	cout << "\n**********************************\n";
	cout << " Average Of Marks is : " << Result << endl;
}

int main()
{
	float Mark1, Mark2 , Mark3;
	ReadMark(Mark1, Mark2, Mark3);
	PrintResutAverge(AvergeCalc(Mark1, Mark2, Mark3));

	return 0;
} 
