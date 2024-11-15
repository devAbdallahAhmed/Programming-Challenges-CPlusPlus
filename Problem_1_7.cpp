// Problem_7 >> Write a program to ask the user to enter : Number  , Then print the "Half of the <Number> is <???>"

 #include <iostream>
  #include <string>  
  using namespace std;

 int ReadNum() {
     int Num;
     cout << "Please Enter Is Num\n";
     cin >> Num; 
     return Num;
 }
 float HalfNumber( int Num) {
     

     return   (float)Num / 2;

 }
 void PrintNum(int Num)
 {
     string Result = "\nHalf Of " + to_string(Num) + " is " + to_string(HalfNumber(Num));
     cout << Result;
 }

 int main() {

     PrintNum(ReadNum()); 
     
    return 0;
 }
