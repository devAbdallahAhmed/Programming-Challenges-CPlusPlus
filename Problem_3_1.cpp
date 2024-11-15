// Problem_19 >> Circle Area Through Diameter
// Write a program to calculate circle area through dirameter, then print it on the screen

 #include <iostream>
#include <string>
 using namespace std;

 float Read_Dirameter_Circle() {
     float D;
     cout << "Please Enter Num 1 :" << endl;
      cin >> D;
      return D;
 }

  float CircleAreaThroughDiameter(float D) {
     float const PI = 3.14159265359;
     float Area = (PI * pow(D, 2)) / 4;
     return Area;
 }
 void  PrintNums(float Area)
{
     cout << " The Area Triangle Area :" << Area;
 }
 int main() {
     PrintNums(CircleAreaThroughDiameter(Read_Dirameter_Circle()));
    return 0;
 }
