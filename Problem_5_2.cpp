// Problem_38 >> Is Prime Number ? 
// Write a program to read a number and check if it is a prime number or not 


#include <iostream>
#include <string>
 using namespace std;

 enum enNum { prime = 1, NotPrime = 2 };
 float ReadNum(string Message)
 {
     float Number = 0;
     cout << Message << endl;
     cin >> Number;
     return Number;
 }

enNum CheckNumbrsPrime(int Number) {

    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++) {
        if (Number % Counter == 0)

            return enNum::NotPrime;
    }
    return enNum::prime;
     
 }

void PrintNum(int Number) {
    switch (CheckNumbrsPrime(Number))
    {
    case enNum::prime:
        cout << "The Number Is Prime\n";
        break;
    case enNum::NotPrime:
        cout << "The Number Is Not Prime\n";

    default:
        break;
    }
}
int main(){ 
    PrintNum(ReadNum("The Number Is : "));
return 0;
} 
    
