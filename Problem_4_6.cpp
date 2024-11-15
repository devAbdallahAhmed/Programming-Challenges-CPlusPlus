//Problem_33 >> Grade A, B, C, D, E, F
//Write a program to ask the user to enter : Grade
//Then print the grade as follows :
//[-100 - 90 print A]
//[- 89 - 80 print B]
//[- 79 - 70 print C]
//[- 69 - 60 print D]
//[- 59 - 50 print E]
//[Overwise print F]

 #include <iostream>
    #include <string>
    using namespace std;

    int GetGradeLetter(int Form ,  int To) {
     int Grade;
     do {
         cout << "Please Enter The Grade Between 0 And 100 : \n";
             cin >> Grade;
    
     
     } while (Grade < Form || Grade > To);
     
     return Grade;
 }


 char CheakMark(int Grade) {
    
     if (Grade >= 90)
         return 'A';
     else if (Grade >= 80)
         return 'B';
     else if (Grade >= 70)
         return 'C'; 
     else if (Grade >= 60)
           return 'D'; 
     else if (Grade >= 50)
         return 'E';
     else
         return 'F';
 }

int main() {
   cout << endl << "Result =  " << CheakMark(GetGradeLetter(0, 100));

    return 0;
} 
