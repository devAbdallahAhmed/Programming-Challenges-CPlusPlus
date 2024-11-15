// Problem_32 >> Power of M (LOOPS)
// Write a program to ask the user to enter : Number , M 
// Then print the Number ^ M
// input >> 2 , 4
// output >> 16 

#include <iostream>
 #include <string>
 using namespace std;
 
  int ReadNum() {
	  int Num;
	 cout << "Please Enter Num \n";
	 cin >> Num; 
	 return Num;
 }

 int ReadPower() {
	 int Num;
	 cout << "Please Enter Power \n";
	 cin >> Num;
	 return Num;
  }
int printNum(int Num, int M) {

	if (M == 0) {
		return 1;
	}

	int P = 1;
    
	for (int i = 1; i <= M; i++) {
		P *= Num;
	}
	return P;

 }

int main() {
	cout << printNum(ReadNum(), ReadPower()); 
	return 0;
} 
