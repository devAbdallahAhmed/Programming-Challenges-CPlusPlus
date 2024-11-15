//Problem_26 >> Read numbers from 1 to N(loops)
// Write a program to print numbers from 1 to N

 int Read_Num() 
{
     int N;
     cout << "Please Enter Num :" << endl;
  cin >> N;
  return N;
 }

void printNumFor(int N)
{
      cout << "Range Printed Using For  Statement\n";

      for (int Counter = 1; Counter <=  N; Counter++)
        {
          cout <<"Num : " <<  Counter << endl;
        }
}

int main() {
  int n = Read_Num();
  printNumFor(n);
  return 0;
} 
