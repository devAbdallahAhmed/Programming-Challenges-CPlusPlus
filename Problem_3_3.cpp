// Problem_21 >> Circle Area Along the circumference 
// Write a program to calculate circle area along the circumference, then print it on the screen 
// Area = (L * L) / (4 * PI)


#include <iostream>
#include <string>
using namespace std;

 float ReadCircumference() {
     float L;
     cout << "Please Enter Num 1 :" << endl;
      cin >> L;
      return L;
 }

 float CircleAreaCircumference(float L) {

     float const PI = 3.14;
     float Area =  pow(L,2) / (PI * 4);
     return Area;
 }

 void  PrintNums(float Area)
 {
     cout << " The Circle Area Circumference :  :" << Area; 
 }

 int main() 
{
     PrintNums(CircleAreaCircumference(ReadCircumference()));    
    return 0;
 } 
