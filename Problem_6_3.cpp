// Problem_48 >> Monthy Loan Installment 
// Write a program to read a LoanAmount and ask you how many months you need to settle the loan , then calculate the monthly installment amount .


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

float Print_Num(float LoanAmount, float  HowMoneyMonth) {
    float MonthlyInstallment = LoanAmount / HowMoneyMonth;
    return MonthlyInstallment;
}
int main() {
    float LoanAmount = ReadPositiveNum("Please Enter Loan Amount ? ");
    float HowMoneyMonth = ReadPositiveNum("Please Enter How Money Month ? ");
    cout << " The number to be paid per month : " << Print_Num(LoanAmount, HowMoneyMonth);


    return 0;
}
