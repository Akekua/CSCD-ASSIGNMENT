
#include <iostream>
using namespace std;

int main()
{
  int num, r;
  bool isPrime = true;

  cout << "Enter a positive integer: ";
  cin >> num;

  for(r = 2; r <= num / 2; ++r)
  {
      if(num % r == 0)
      {
          isPrime = false;
          break;
      }


  }
  if (isPrime)
      cout << "The number "<< num << " is a prime number";
  else
      cout << "The number " << num << " is not a prime number";

  return 0;
}
