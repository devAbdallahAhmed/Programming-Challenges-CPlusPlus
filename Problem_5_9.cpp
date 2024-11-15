// Problem_45 >> Month Of year
// Write a program to ask the user to enter : Month
// Then Print the day as follows :
// 1 print Jun
// 2 print Feb
// 3 print Mar
// 4 print Apr
// 5 print May
// 6 print June
// 7 print July
// 8 print Aug
// 9 print Sep
// 10 print Oct
// 11 print Nov
// 12 print December
// - Otherwise print  " Wrong Day " and ask the use to enter the Manth again

#include <iostream>
#include <string>
 using namespace std;
enum ENMonthOfYear {Jan = 1, Feb = 2, Mar =3, Apr =4, May =5, June = 6, 
July =7, Aug = 8, Sep =9,Oct =10, Nov =11,Dec= 12};

 int ReadNumOfMonth(string Message,int Form ,int To ) {
    int Number;
     do {
         cout << Message << endl;
         cin >> Number;
     } while (Number <  Form || Number> To);
     return Number;
 }
 ENMonthOfYear ReadNums() {
     return  (ENMonthOfYear)ReadNumOfMonth("Please Enter Month  ", 1, 12);
 }
 string CheckMonth(ENMonthOfYear Month){
    
     switch (Month) {

     case ENMonthOfYear::Jan:
         return  "Jan";
         break;
     case ENMonthOfYear::Feb:
         return "Feb";
         break;
     case ENMonthOfYear::Mar:
         return "Mar";
         break;
     case ENMonthOfYear::Apr:
         return "Apr";
         break;
     case ENMonthOfYear::May:
         return "May";
         break;
     case ENMonthOfYear::June:
         return "June";
         break;
     case ENMonthOfYear::July:
         return "July";
         break;
     case ENMonthOfYear::Aug:
         return "Aug";
         break;
     case ENMonthOfYear::Sep:
         return "Sep";
         break;
     case ENMonthOfYear::Oct:
         return "Oct";
         break;
     case ENMonthOfYear::Nov:
         return "Nov";
         break;
     case ENMonthOfYear::Dec:
         return "Dec";
         break;
     default:
         break;
     }    
 }
int main(){ 
    cout <<  "It’s :  " << CheckMonth(ReadNums());
return 0;
} 
