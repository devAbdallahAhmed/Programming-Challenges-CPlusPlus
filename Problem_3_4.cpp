//Problem_22 >> Circle Area Inscribed in an Isosceles Triangle
//Write a program to calculate circle area Inscribed in an Isosceles Triangle, Then print it on the screen
// Area = (PI*b*b/4)*((2*a-b)/(2*a+b))

#include <iostream>
#include <string>
 using namespace std;

 void ReadCircleAreaByTriangle(float &a, float &b) {

     cout << "Please Enter A  :" << endl;
      cin >> a;
      
      cout << "Please Enter b  :" << endl;
      cin >> b;
 }

 float CircleAreaByTriangle(float a , float b) 
{
     float const PI = 3.14;
     float Area = (PI * pow(b, 2) / 4) * ((a * 2 - b) / (a * 2 + b ));
     return Area;
 }

 void  PrintRuslet(float Area)
 {
     cout << " The Circle Area Circumference : " << Area; 
 }

 int main() {
     float a, b;
     ReadCircleAreaByTriangle (a, b);
     PrintRuslet(CircleAreaByTriangle(a,b)); 
    return 0;
 } 
    
