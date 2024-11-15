//Problem_5 >> Write a program to ask the user to enter his/her : Age , Driver license and Has Recommendation! Then print "Hired if his/her" age is grater than 21 and s/he has a driver license , otherwise print "Rejected" Or Hire him/her without conditions! 

#include <iostream>
#include <string>
 using namespace std;

 struct strInfo {
     int Age;
     bool Driver_License;
     bool  mediator;

};

 strInfo ReadInfromtion() {
     strInfo Info;
     cout << "Please Enter Age : \n";
     cin >> Info.Age;

     cout << "Please Enter Driver_License :\n";
    cin >> Info.Driver_License;

    cout << "Please Enter Driver_License :\n";
    cin >> Info.mediator;

    return Info;
 }
 bool check(strInfo Info) {

     if (Info.mediator) {
         return true;
     }
     else {

         return (Info.Age >= 21 && Info.Driver_License == true);
     }
 }
 void printResult(strInfo Info) {
     
     if (check(Info)) {
         cout << "\n Hello Hired" << endl;
     }

     else {
         cout << "\nRejected" << endl;
     }
 }
 int main() {

     printResult(ReadInfromtion());
    return 0;
}
