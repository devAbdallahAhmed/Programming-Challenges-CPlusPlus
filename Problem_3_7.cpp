// Problem_25 >> Read until Age between 18 and 45
// Write a program to ask the user to enter : age if age is 18 and 45 print "Valid Age" otherwise print "Invalid Age" and re - ask user to enter a valid age .
// note : you should keep asking user to enter a valid age until s / she enters it .


#include <iostream>
#include <string>
 using namespace std;

 int ReadAge() {
     int Age;
     cout << "Please Enter Age Between 18 And 45 ? " << endl;
     cin >> Age;
     return Age;
 }
 bool ValidateNumberInRange(int Number , int From , int to ) 
{
     return (Number >= From && Number <= to);
}

 int ReadUntilAgeBetween(int From, int To) {
     int Age = 0;

     do {
         Age = ReadAge();

     } while (!ValidateNumberInRange(Age, From, To));

     return Age;
  }
 void printResult(int Age)
 {
     cout << "Your Age Is " << Age << endl;
 }
 int main() 
{  
     printResult(ReadUntilAgeBetween(18, 45));
    return 0;
 } 

