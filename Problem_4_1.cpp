// Problem_28 >> Sum Odd Numbers from 1 to N 
// Write a program to Sum ODD numbers from 1 to N

#include <iostream>
#include <string>
using namespace std;
int ReadNum() {
     int N;
     cout << "Please Enter Num :" << endl;
  cin >> N;
  return N;
 }

void printNumDo_While(int N) {
    cout << "Range Printed Using Do_While  Statement\n";
    int Counter = N;
    do  {
      
        cout << "Num : " << Counter << endl;
        Counter--;
    }  while (Counter >= 1);   
}
int main() {
  int n = ReadNum();
  printNumFor(n);
 
  return 0;
} 
