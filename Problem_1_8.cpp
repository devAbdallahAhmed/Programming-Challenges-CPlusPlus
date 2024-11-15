// Problem_8 >> Write a program to ask the user to enter : Mark Then print the "PASS" if mark >= 50 , Otherwise print "Fail"
 #include <iostream>
  #include <string>

enum enPassFail{Pass = 1, Fail = 2};
 int ReadMark() {
     int Mark;
     cout << "Please Enter The MArk " << endl;
     cin >> Mark;
     return Mark;
 }
 
 enPassFail check(int Mark) {
    
     if (Mark>= 50) 
         return enPassFail::Pass;
     
     else 
         return enPassFail::Fail;     
 }
 void print(int Mark) {

     if (check(Mark) == enPassFail::Pass)

         cout << "You Passed\n ";
     else
         cout << "You Faild\n ";
 }

 int main() {

     print(ReadMark());
    return 0;
 }
