//Problem_6 >> Write a program to ask user to enter : first name amd last name

#include <iostream>
#include <string>
 using namespace std;

 struct Iformation{
     string First_Name;
     string Last_Name;
 };

 Iformation ReadName() {
     Iformation Info;

     cout << "Please Enter First_Name\n";
     cin >> Info.First_Name;

     cout << "Please Enter Last_Name\n";
    cin >> Info.Last_Name;

    return Info;
 }

 string FullName(Iformation Info)
 {
     string Full_Name = " ";

         Full_Name = Info.First_Name + " " + Info.Last_Name;
         return Full_Name;
 }

 void  printName( string Full_Name) {
     cout << "\nFull_Name :  " << Full_Name << endl;
   
 }
 int main() {

     printName(FullName(ReadName()));
    return 0;
 }
