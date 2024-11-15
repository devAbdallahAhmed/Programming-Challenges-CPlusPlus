// Problem_31 >> Power of 2, 3, 4
// Write a program to ask the user to enter : Number
// # then print the  Number 2, Number 3, Number 4
// input >> 3
// output >> 9, 27, 81

#include <iostream>
#include <string>
 using namespace std;

 int ReadNum() {
	 int Num;
	 cout << "Please Enter Number\n";
	 cin >> Num;
	 return Num;
}

 void PrintNum(int Num) {
	cout << "The Power : "<<Num << " Of 2 : " << pow(Num, 2) << endl;
	cout << "The Power : "<<Num << " Of 3 : " << pow(Num, 3) << endl;
	cout << "The Power : "<<Num << " Of 4 : " << pow(Num, 4) << endl;
 }

int main() {
	PrintNum(ReadNum());
  return 0;
} 
