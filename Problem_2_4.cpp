// Problem_13 >> Write a program to ask the user to enter 3 numbers : A , B , C , Then print Max number

   void ReadNums(int &Num1, int &Num2 , int &Num3) {
     cout << "Please Enter Num 1 :" << endl;
     cin >> Num1;

     cout << "Please Enter Num 2 :" << endl;
     cin >> Num2;

     cout << "Please Enter Num 3 :" << endl;
     cin >> Num3;

 }

 int CheckOfMaxNum(int Num1, int Num2 , int Num3) {
     if (Num1 > Num2)
         return  Num1;
     else if (Num2 > Num3)
         return  Num2;
     else
         return Num3;
 }

 void PrintNums(int Max)
 {
     cout << "The Max Number Is " << Max;
 }
 int main() {
     int Num1, Num2 , Num3;
     ReadNums(Num1, Num2, Num3);
     PrintNums(CheckOfMaxNum(Num1, Num2, Num3));
    return 0;
 }
