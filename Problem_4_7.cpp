//  Problem_34 >> Commission Percentage
//  Write a program to ask the user to enter : Total sales
//  - The commission is calculate as one percentage * the total sales amount, all you need is to decide which percentage to use of the following :
//  > 1000, 000 -- > Percentage is 1 %
//  > 500K to 1M-- > Percentage is 2 %
//  > 100K - 500K-- > Percentage is 3 %
//  > 50K to 100K-- > Percentage is 5 %
//  > otherwise-- > Percentage is 0 %
//  Input >> 110, 000
//  Output >> 3, 300


#include <iostream>
#include <string>
 using namespace std;
 
 int ReadTotalSales() {
     int Total;
     cout << "Please Enter the Total Number \n ";
     cin >> Total;
     return Total;
 }
 float CheckTotal(float Total) {
     
     if (Total >= 1000000)
         return 0.01;
     else if (Total >= 500000)
         return 0.02;
     else if (Total >= 100000)
         return 0.03;
     else if (Total >= 50000)
         return 0.05;
     else {
         cout << " Percentage = 0 ";
     }
     
 }

 float CalculateTotalComission(float Total) {
     return CheckTotal(Total) * Total;
 }
int main() {
    float totalSales = ReadTotalSales();
    cout << "The Comission Percentage " << CheckTotal(totalSales) << endl;
    cout << "Total Comission =  "  << CalculateTotalComission(totalSales) << endl;

    return 0;
} 
