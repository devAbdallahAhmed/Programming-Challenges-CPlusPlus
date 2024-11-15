// Problem_47 >> Loan Installment Months 
// Write a program to read a LoanAmount and MonthlyPayment and Calculate how many months you needs to settle the loan.

#include <iostream>
#include <iostream>
#include <string>
 using namespace std;

 float ReadPositiveNum(string Message) {
     float Number;
     do {
         cout << Message << endl;
         cin >> Number;
     } while (Number < 0);
     return Number;
 }

 float Print_Num(float LoanAmount, float MonthlyInstallment)
{
     return (float)LoanAmount / MonthlyInstallment;
}
int main(){ 
    float LoanAmount = ReadPositiveNum("Please Enter Loan Amount ? ");
    float MonthlyInstallment = ReadPositiveNum("Please Enter Monthly Installment ? ");
    cout << " The Total Month : " << Print_Num(LoanAmount, MonthlyInstallment);  
return 0;
} 
