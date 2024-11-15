// Problem_20 >> Circle Area Inscribed in a square 
// Write a program to calculate area inscribed in a square , then print it on the screen

    #include <iostream>
#include <string>
 using namespace std;

 float Read_Square() {
     float A;
     cout << "Please Enter Num 1 :" << endl;
      cin >> A;
      return A;
 }

  float CircleAreaInscribedInSquare(float A) {

     float const PI = 3.14;
     float Area = (PI * pow(A, 2)) / 4;
     return Area;
 }
 void  PrintNums(float Area)
 {
     cout << " The Area Triangle Area :" << Area; 
 }
 int main() {
     PrintNums(CircleAreaInscribedInSquare(Read_Square())); 

    
    return 0;
 }
   
