// Problem_39 >> Pay Remainder ? 
// Write a program to read a totalBill nd cashpaid and calculate the remainder to paid back .


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

 float CalculateRemainder(float TotalBill , float CashPail) {
    
     return  CashPail  - TotalBill;
 }

int main(){ 
    float TotalBill = ReadNum("Please Enter TotalBill ");
    float cashPail = ReadNum("Please Enter CashPail ");
  
    cout << "Total Bill = " << CalculateRemainder(TotalBill,cashPail);
 

return 0;
} 
