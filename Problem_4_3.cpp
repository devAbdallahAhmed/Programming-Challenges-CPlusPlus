// Problem_30 >> Factorial of N!
// Write a program to calculate factorial of N !
// factorial of 5 >> 5 * 4 * 3 * 2 * 1 = 120
// note : User should only positive number , other wise reject it and ask to enter again 

#include <iostream>
#include <string>
 using namespace std;
int ReadNum(string Message) {
    int Number; 
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}
int printNum(int N)
{
    int Factorial = 1;
      for (int Counter =N; Counter >1; Counter--){
          Factorial *= Counter;
      }
      return Factorial; 
}

int main() {
  cout << printNum(ReadNum("Enter N ?!")); 
  return 0;
} 
