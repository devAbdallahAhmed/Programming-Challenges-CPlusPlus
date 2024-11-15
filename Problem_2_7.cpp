// Problem_16 >>Rectangle area though diagonal and side Area .
// Write a program to calculate rectangle area through diagonal and site area of rectangle and print it on the screen .
// Area = a * sqrt(d*d - a*a) 

 #include <iostream>
#include <string>
 using namespace std;

 void ReadDiagenal_Area(float&A, float&B ) {
     cout << "Please Enter Diagonal   :" << endl;
      cin >> A;

     cout << "Please Enter Side Area:" << endl;
     cin >> B;
 }

  float ClculateRectangleArea(float A, float B ) {

       float Area =  A * sqrt(pow(B,2) - pow(A,2));
        return Area;
 }
 void PrintNums(float Area)
 {
    
     cout << " The Area Rectangle Area Diaganel :" << Area;
 }
 int main() {
     float A, B;
     ReadDiagenal_Area(A, B);
     PrintNums(ClculateRectangleArea(A,B));

    
    return 0;
 }
