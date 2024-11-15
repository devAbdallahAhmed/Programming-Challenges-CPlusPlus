// Problem_17 >>Triangle Area 
// Write a program to calculate triangle area then print it on the screen 
// Area = a/2 * h


         #include <iostream>
#include <string>
 using namespace std;

 void Read_Triangle_BaseHeight(float&A, float&B ) {
     cout << "Please Enter The Triangle Base :" << endl;
      cin >> A;

     cout << "Please Enter  The height : " << endl;
     cin >> B;
 }

  float triangleArea(float A, float B ) {

      float Area = (A / 2) * B;
        return Area;
 }
 void PrintNums(float Area)
 {
     
     cout << " The Area Triangle Area :" << Area;

 }
 int main() {
     float A, B;
     Read_Triangle_BaseHeight(A, B);
     PrintNums(triangleArea(A,B));

    
    return 0;
 }
