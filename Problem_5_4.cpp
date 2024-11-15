// Problem_40 >> Sevice Fee and Salse Tax
// Write a program to read a BillValue and add Service fee and salse tax tax to it, and print the totalbill on the screen
// - A Resturant charge 10 % services fee and 16 % salse Tax

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

 float CalculateRemainder(float TotalBill) {
    
     TotalBill *= 1.1;
     TotalBill *= 1.16;
     return  TotalBill;
 }

int main(){ 
    float TotalBill = ReadNum("Please Enter TotalBill ");

    cout << "Total Bill = " << CalculateRemainder(TotalBill);
 

return 0;
} 
