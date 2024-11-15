// Problem_49 >> ATM PIN
// Write a program to read the ATM PIN code from the user, Then check if PIN code = 1234, Then show the balance to user, otherwise print " Wong PIN " and ask the user to enter the PIN again
// Assume User Balance is 7500
// If he enters the wrong pin, I will make him read it again and make the screen red.

#include <string>
using namespace std;
string ReadPinCode() {
    string PinCode;
    cout << " Please Enter Pin Code :\n";
    cin >> PinCode;

    return PinCode;
}

bool Login() {
    string PinCode;
    do
    {
        PinCode = ReadPinCode();
        if (PinCode == "1234") {
            return 1;
        }
        else {
            cout << "\nWrong PIN\n";
            system("color 4F");
        }

    } while (PinCode != "1234");
}

int main() {
    if (Login())
    {
        system("color 2f");
        cout << "\n Your Account Balance Is : [ " << 7500 << " ]\n";
    }

    return 0;
} 
