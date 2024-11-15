// Problem_36 >> Simple Calculator
// Write a program to ask the user to enter :
// -Number1, Number2, Operation Type
// Then perform the calculation according to the operation type as follows :
// -"+" add the two numbers.
// - "-" subtract the two numbers.
// - "*" multiply the two numbers.
// - "/" devide the two numbers.

#include <iostream>
#include <string>
 using namespace std;

 enum enOp{Add= '+', Subtract = '-',Multiply = '*',Divide = '/'};
float ReadNumsAndOp(string Message ){
     float Number = 0;
     cout << Message << endl; 
     cin >> Number;
     return Number;
   
 }
 enOp ReadType() {
   char OT = '+';
   cout << " Please Enter The Operation Typt [ + , - , * , / ] " << endl;
   cin >> OT;
   return enOp(OT);
 }
 float checkSimbelChar(float Num1, float Num2 ,  enOp Operation) {
     
     switch (Operation)

     {
     case enOp::Add :
         return Num1 + Num2;
         break;
      case  enOp::Multiply:
         return Num1 * Num2;
         break;
     case  enOp::Subtract:
         return Num1 - Num2;
         break;
     case  enOp::Divide:
         return Num1 / Num2;
     default:
      return Num1 + Num2;
         
     }
     
 }
int main() {
    float Num1 = ReadNumsAndOp("Please Enter Num 1");
    float Num2 = ReadNumsAndOp("Please Enter Num 2");

    enOp OpType = ReadType();
    cout << endl << "Result = " << checkSimbelChar(Num1, Num2, OpType) <<endl;
   
    return 0;
} 
