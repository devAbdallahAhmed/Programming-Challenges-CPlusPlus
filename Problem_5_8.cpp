// Problem_44 >> Day of week
// Write a program to ask the user to enter : Day
// Then Print the day as follows :
// 1 Print Sunday
// 2 Print Monday
// 3 Print Tuesday
// 4 Print Wednesday
// 5 Print Thursday
// 6 Print Friday
// 7 Print Saturday
// - Otherwise print  " Wrong Day " and ask the use to enter the day again

 #include <iostream>
#include <string>
 using namespace std;

 enum ENDayOfWeek { Sundey = 1, Monday = 2, Tuecday =3, Wensdey =4, Sthurday =5, Frieday = 6, Struday =7};

 int ReadNum(string Message,int Form ,int To ) {

    int Number;
     do {
         cout << Message << endl;
         cin >> Number;
     } while (Number <  Form || Number> To);
     return Number;
 }

 ENDayOfWeek ReadNums() {
     return  (ENDayOfWeek)ReadNum("Please Enter Day ", 1, 7);
 }
 string CheckDey(ENDayOfWeek Weeks){
     switch (Weeks) {
     case ENDayOfWeek::Sundey:
         return  "Sundey";
         break;
     case ENDayOfWeek::Monday:
         return "Mondey";
         break;
     case ENDayOfWeek::Tuecday:
         return "Tuecday";
         break;   *
     case ENDayOfWeek::Wensdey:
         return "Wensdey";
         break;
     case ENDayOfWeek::Sthurday:
         return "Sthurday";
         break;
     case ENDayOfWeek::Frieday:
         return "Frieday";
         break;
     case ENDayOfWeek::Struday:
         return "Struday";
         break;
     default:
         break;
     }    
 }

int main(){  
    cout <<  "It’s :  " << CheckDey(ReadNums());
return 0;
} 
