// Problem_50 >> ATM PIN 3 Times
// Write a program to read the ATM PIN code from the user, then check if code = 1234, then show the balance to user, otherwise print " Wrong PIN " and ask the user to enter  the PIN again
// #Only  allow user to enter the PIN 3 times, if fails, print " Card is locked "
// - Assume user Balance is 7500

#include <iostream>
#include <string>
using namespace std;

string Read_Pin()
{
    string PinCode;
    cout << "Enter Pin Code : ";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    int i = 3;
    string PinCode;
    do
    {
        i--;
        PinCode = Read_Pin();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << "\nWrong Pin Code You Have \n"<<i <<"More try"<<endl; 
            system("color 4F"); // Red
        }

    } while (PinCode !="1234" && i >=1);
    
    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F"); // green
        cout << endl << "Your account Balance is : " << 7500 << endl;
    }
    else
    {
        cout << "\nYour Card Blocked Call The Bank For Help \n";
    }
    return 0;
}
