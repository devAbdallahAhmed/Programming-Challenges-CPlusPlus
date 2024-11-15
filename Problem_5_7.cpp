// Problem_43 >> Seconds to Days Hours Minutes Seconds
// Write a program that inputs the number of seconds and changes it to days, hours, minutes and seconds


  #include <iostream>
#include <string>
 using namespace std;

 struct TaskDuration {
	 int NumberOfDayes, NumberOfHours, NumberOfMinutes, NumberOfSecond;
 }; 

 int ReadNum(string Message) {

     int Number;
     do {
         cout << Message << endl;
         cin >> Number;
     } while (Number < 0);
     return Number;
 }

 TaskDuration ReadtaskDuration(int total_Scound) {
     TaskDuration Tasks;
     const int SecondPerDay = 24 * 60 * 60;
     const int SecondPerHour =  60 * 60;
     const int SecondPerMinutes =  60;
     int Remainders = 0;
     Tasks.NumberOfDayes = floor(total_Scound / SecondPerDay);
      Remainders = total_Scound % SecondPerDay;

     Tasks.NumberOfHours = floor(Remainders / SecondPerHour);
      Remainders = Remainders % SecondPerHour;

     Tasks.NumberOfMinutes = floor(Remainders / SecondPerMinutes);
      Remainders = Remainders %SecondPerMinutes;

     Tasks.NumberOfSecond = Remainders;
     return Tasks;
    
 }
  
 void TotalDuration(TaskDuration Tasks) {

    cout <<  Tasks.NumberOfDayes << " : " << Tasks.NumberOfHours << " : " << Tasks.NumberOfMinutes << " : " << Tasks.NumberOfSecond;
 }
int main(){ 
 
 
    int total_second = ReadNum("Pleas Enter Total Second ? ");
    TotalDuration(ReadtaskDuration(total_second));
return 0;
} 
