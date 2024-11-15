//Problem_35 >> Piggy Bank Calculator 
//Write a program to ask the user to enter:
//Pennies , Nickels , Dimes , Quarters , Dollars 
//#Then calculate the total pennies , total dollars and print them on screen giving that :
//- penny  = 1
//- Nickel = 5
//- Dime   = 10
//- Quarter= 25
//- Dollar = 100

#include <iostream>
#include <string>
 using namespace std;

 struct strPiggyBank {
     int penny, Nickel, Dime, Quarter, Dollar;
 };
 strPiggyBank ٌReadPiggyBank() {
     strPiggyBank  BankCoins;
     cout << "Please Enter The Penny \n";
     cin >> BankCoins.penny;
     cout << "Please Enter The Nickel \n";
     cin >> BankCoins.Nickel;
     cout << "Please Enter The Dime \n";
     cin >> BankCoins.Dime;
     cout << "Please Enter The Quarter \n";
     cin >> BankCoins.Quarter;
     cout << "Please Enter The Dollar \n";
     cin >> BankCoins.Dollar;

     return BankCoins;
 }

 float CalculetDollarAndPenny(strPiggyBank PiggyBank) 
{
     int TotalBennies = 0;
     TotalBennies = (PiggyBank.penny * 1) + (PiggyBank.Nickel * 5) + (PiggyBank.Dime * 10) + (PiggyBank.Quarter * 25) + (PiggyBank.Dollar * 100);
     return TotalBennies;
 }

int main() {
    int TotalPeniez = CalculetDollarAndPenny(ٌReadPiggyBank());
    cout << " The Penny = " << TotalPeniez << endl;
    cout << " The Dollar = " << (float)TotalPeniez / 100 << endl;
    return 0;
} 
