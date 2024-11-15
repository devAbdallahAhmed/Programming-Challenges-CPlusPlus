// Problem_18 >>Circle Area 
// Write a program to calculate  circle area then print it on the screen 
// PI = 3.14
// Area = PI * (r * r)


#include <iostream>
#include <string>
 using namespace std;

 float Read_Circle() {
     float R;
     cout << "Please Enter  Radius  :" << endl;
      cin >> R;
      return R;
 }

  float CircleArea(float R) {

     float const PI = 3.14;
     float Area = PI * pow(R, 2);
     return Area;
 }
 void  PrintNums(float Area)
 {
     cout << " The Area Triangle Area :" << Area;
 }
 int main() {
     PrintNums(CircleArea(ReadNum()));
    return 0;
 }
   
