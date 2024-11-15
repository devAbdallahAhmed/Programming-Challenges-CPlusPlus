// Problem_37 >> Sum Until - 99
// Write a program to read numbers from user and sum them, keep reading unit the user enters - 99 then print the Sum on screen

#include <iostream>
#include <string>
using namespace std;

float ReadNum(string Message)
{
    float Number = 0;
     cout << Message << endl;
     cin >> Number;
     return Number; 
}
float CheckNum() {
    int sum = 0, Number = 0, Counter = 1;
  
    do {
         Number = ReadNum("Please enter Num =  " +to_string(Counter));
         if (Number == -99)
             break;
         sum += Number;
         Counter++;
       } while (Number != -99);       
       
  return sum;
}
int main(){ 
    cout << endl << "Result = " << CheckNum();
return 0;
} 
