//Problem_3 >> Write a program to ask the user to enter a number , then print "ODD" if its odd , or "EVEN if its even

#include <iostream>
using namespace std;

enum enNumberType { Even = 1, Odd = 2};
 
  int ReadNum() {
        int Num;
        cout << "Please Enter Name :\n";
        cin >> Num;
        return Num;
  }

  enNumberType CheckNum(int Num) {
      int result;
      result = Num % 2;
      if (result == 0) {
          return enNumberType::Even;
      }
      else 
      {
          return enNumberType::Odd;

      }
  }

  void PrintNumberType(enNumberType NumberType) {
      if (NumberType == enNumberType::Even)
      {
          cout << "\n Number Is Even.\n";
      }
      else
      {
          cout << "\n Number Is Odd.\n";

      }
  }
int main() {
     
    PrintNumberType(CheckNum(ReadNum()));
    return 0;
}
