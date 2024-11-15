// Problem_9 >>  Write a program to ask the user to enter : Number1, Number2, Number3 Then print the Sum of entered numbers 

#include <iostream>
#include <string> 
using namespace std;

void Read_Numbers(int Array[3])
{
	cout << "Enter Number 1 : ";
	cin >> Array[0];

	cout << "Enter Number 2 : ";
	cin >> Array[1];

	cout << "Enter Number 3 : ";
	cin >> Array[2];
}

int Sum_Numbers(int Array[3])
{
	int Sum;

	Sum = Array[0] + Array[1] + Array[2];

	return Sum;
}

void Print_SumNumbers(int Sum)
{
	cout << "The Sum  Numbers is : " << Sum << endl;
}

int main()
{
	int Array[3];
	ReadNumbers(Array);
	PrintSumNumbers(SumNumbers(Array));
	return 0;
}
 }
