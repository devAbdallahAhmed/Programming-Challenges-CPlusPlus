// Problem_11 >> Write a program to ask the user to enter : Mark1 , Mark2 , Mark3 Then Print the Average of entered Marks , and print "Pass" if average >= 50 , otherwise print "Fail"

#include <iostream>
using namespace std;

enum enStudent_Result { Pass = 1 , Fail = 2};

void ReadMarks(float& Mark1, float& Mark2, float& Mark3)
{

	cout << "Enter Mark 1 : ";
	cin >> Mark1;

	cout << "Enter Mark 2 : ";
	cin >> Mark2;

	cout << "Enter Mark 3 : ";
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

enStudentsResult CheckPassFail(float Result)
{
	if (Result >= 50)
		return enStudentsResult::Pass;
	else
		return enStudentsResult::Fail;
}


void PrintResutAverge(float Result)
{
	if (Result == enStudentsResult::Pass)
	{
		cout << " Is Pass " << endl;
	}
	else
	{
]		cout << " Is Fail " << endl;
		
	}
}

int main()
{
	float Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResutAverge(CheckPassFail(AvergeCalc(Mark1, Mark2, Mark3)));

	return 0;
}
