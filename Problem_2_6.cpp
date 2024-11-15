//Problem_15 >>Rectangle Area Write a program to calculate rectangle area and print it on the screen 
// Area = a*b 


#include <iostream>
using namespace std;

void Read_LengthWidth(float &A , float &B)
{
	
	cout << " The Enter The Length : ";
	cin >> A;

	cout << " The Enter The Width : ";
	cin >> B;
}

float CalcRectangleArea(float A, float B)
{
	return A * B;
}

void PrintResultArea(float RectangleArea)
{
	cout << "The Rectangle Area is : " << RectangleArea << endl;
}

int main()
{
	float A, B;
	Read_LengthWidth(A, B);
	PrintResultArea(CalcRectangleArea(A, B));
	return 0;
}
