#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> n;
      for(int i=2;i<=sqrt(n);++i)
      {
          if(n%i==0)
          {
              isPrime=false;
              break;
          }
      }
      cout<<isPrime<<endl;
    return 0;
}
