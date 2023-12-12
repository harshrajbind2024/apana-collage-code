// similer salution
//GFG dsa code---  1.09listOfPrimeNoSELF



// M-1 
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
        /* code */
    }
}
void listOfPrime(int n)
{
    for(int i=2;i<n;i++){
        if(prime(i)){
            cout <<i<<endl;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    bool Pn = prime(n);
   listOfPrime(n);
}




//M-2

#include <iostream>
using namespace std;

bool check_prime(int);

void listOfPrime(int n)
{
    for(int i=2;i<n;i++){
        if(check_prime(i)){
            cout <<i<<endl;
        }
    }
}

int main() {

  int n;

  cout << "Enter a positive  integer: ";
  cin >> n;

  // if (check_prime(n))
  //   cout << n << " is a prime number.";
  // else
  //   cout << n << " is not a prime number.";


 listOfPrime(n);    

  return 0;

}

bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
