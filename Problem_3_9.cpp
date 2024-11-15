// Problem_27 >> Read numbers from 1 to N (loops )
// Write a program to print numbers from N to 1 

#include <iostream>
#include <string>
 using namespace std;
int ReadNum() {
     int N;
     cout << "Please Enter Num :" << endl;
  cin >> N;
  return N;
 }


void printNumFor(int N)
{
    cout << "Range Printed Using For  Statement\n";
      for (int Counter = N; Counter >=1; Counter--) {
          cout <<"Num : " <<  Counter << endl;
      }
 }

int main() {
  int n = ReadNum();
  printNumFor(n);
  return 0;
} 
