// Problem_29 >> Sum EVEN Numbers from 1 to N 
// Write a program to Sum EVEN numbers from 1 to N 

#include <iostream>
#include <string>
 using namespace std;
int ReadNum() {
     int N;
     cout << "Please Enter Num :" << endl;
  cin >> N;
  return N;
 }

enum  CheckEvenOrOdd { Odd =1 ,Even=2};

CheckEvenOrOdd Validate(int Number) {
    if (Number % 2 != 0)
        return CheckEvenOrOdd::Odd;
    else 
        return CheckEvenOrOdd::Even;

}
int printNumForEvenOrOod(int N){
     
    int sum = 0;
    cout << "Range Printed Using For  Statement\n";
      for (int Counter = 1; Counter <= N; Counter++){        
     if (Validate(Counter) == CheckEvenOrOdd::Even) 
            sum += Counter;
      }
      return sum;
}

int main() {
  int n = ReadNum();
  cout << printNumForEvenOrOod(n);
 
  return 0;
} 
