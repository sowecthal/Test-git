#include <iostream>
using namespace std;

double my_pow(double num, unsigned int pow)
{
  double result = 1;
  for (int i=0;i<pow;i++)
  {
    result *= num;
  }
  return result;
}

int main()
{
  double num, result;
  int pow;

  cout << "Input num, pow: ";
  cin >> num >> pow;

  while (pow<=0)
  {
    cout << "Incorrect pow. Input new pow?: ";
    cin >> pow;
  }

  result = my_pow(num, pow);
  cout << "Result: " << result;

  return 0;
}
