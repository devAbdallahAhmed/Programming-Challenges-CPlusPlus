// Problem_41 >> Weeks and Days
// Write a program to read a NumberOfHours and calculate the number of weeks and days included in that number


  #include <iostream>
#include <string>
 using namespace std;

 float Read_Number_Of_Hours(string Message) {
     float Number = 0;
     cout << Message << endl;
     cin >> Number;
     return Number;

 }
 float HoursToDays(float NumberOfHours)
{ 
     return (float)NumberOfHours /24;
}

 float HoursToWeeks(float NumberOfHours)
{
   return (float) NumberOfHours / 24 /7;
}
 float DayesToWeeks(float NumberOfHours)
 {   
     return  (float)NumberOfHours / 7;
 }
int main(){ 
 
    float Number_Of_Hours = Read_Number_Of_Hours("Please Enter NumberOfHoures?");
    float Number_Of_Dayes = HoursToDays(Number_Of_Hours);
    float Number_Of_weeks = DayesToWeeks(Number_Of_Dayes);

    cout << "endl";
    cout << "Total Hours = " << Number_Of_Hours << endl;
    cout << "Total Dayes = " << Number_Of_Dayes << endl;
    cout << "Total Weeks = " << Number_Of_weeks << endl;


return 0;
} 
