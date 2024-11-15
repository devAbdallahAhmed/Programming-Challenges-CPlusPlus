// Problem_14 >> Swap Numbers Write a program to ask the user to user : Number1 . Number2  ,Then print two numbers , then swap the two numbers and print them 

#include <iostream>
using namespace std;
   void ReadNums(int &Num1, int &Num2 ) {
     cout << "Please Enter Num 1 :" << endl;
     cin >> Num1;

     cout << "Please Enter Num 2 :" << endl;
     cin >> Num2;



 }

 void SwapNum(int &a, int &b ) {
     int emp;
      emp = a;
     a = b;
     b = emp;
 }
 void PrintNums(int Num1, int Num2)
 {
     
     cout << "\nThe Max Number:1 Is " << Num1  << endl;
     cout << "The Max Number:2 Is  " << Num2 << endl;

 }
 int main() {
     int Num1, Num2;
     ReadNums( Num1, Num2 );
     PrintNums( Num1, Num2 );
   
     SwapNum( Num1, Num2 );
     PrintNums( Num1, Num2) ;

    
    return 0;
 }
