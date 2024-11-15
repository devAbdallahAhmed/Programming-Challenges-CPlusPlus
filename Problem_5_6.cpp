// Problem_42 >> Task Duration In Seconds
// Write a program to calculate the task duration in seconds and print it on screen
// >> Give the time duration of a task in the numbers of days, hours, minutes and seconds
// Input >> 2, 4, 45, 35
// Output >> 193, 535 Seconds

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

 TaskDuration ReadtaskDuration() {
     TaskDuration TaskDuration;
     TaskDuration.NumberOfDayes = ReadNum("Please Enter Number Of Dayes");
     TaskDuration.NumberOfHours = ReadNum("Please Enter Number Of Hours");
     TaskDuration.NumberOfMinutes = ReadNum("Please Enter Number Of Mintues");
     TaskDuration.NumberOfSecond = ReadNum("Please Enter Number Of Second");
     return TaskDuration;
 }

 int TotalDuration(TaskDuration Tasks) {
     int Total_Second;
     Total_Second = 
         (Tasks.NumberOfDayes * 24 * 60*60)
         + (Tasks.NumberOfHours * 60 * 60) +
         (Tasks.NumberOfMinutes * 60) 
         + Tasks.NumberOfSecond;
     return Total_Second;
 }
int main(){ 
  
    cout << "Result Num Of Second = " << TotalDuration(ReadtaskDuration());
return 0;
} 

