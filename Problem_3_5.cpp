// Problem_23 >> Circle Area Circle Described Around an Arbitrary Triangle
// Write a program to calculate Circle Described Around an Arbitrary Triangle ,Then print it on the screen .
// T = (a*b*c) / (4*sqrt (P*(P-a)*(P-b)*(P-c)))

#include <iostream>
#include <string>
 using namespace std;

 void ReadCircleAreaByTriangle(float &a, float &b , float &c) {

     cout << "Please Enter A  :" << endl;
      cin >> a;
      
      cout << "Please Enter b  :" << endl;
      cin >> b;

      cout << "Please Enter c  :" << endl;
      cin >> c;
 }

 float CircleAreaByTriangle(float a , float b , float c) {

     float const PI = 3.14;
     float p;
     p = (a + b + c) / 2;
     float T;
      T =(a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    float Area = PI * pow(T, 2);
     return Area;
 }

 void  PrintRuslet(float Area)
 {
     cout << " The Circle Area Circumference : " << Area; 
 }

 int main() {
     float a, b ,c;
     ReadCircleAreaByTriangle (a, b,c);
     PrintRuslet(CircleAreaByTriangle(a,b,c));
    
    return 0;
 } 
   
