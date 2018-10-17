#include<bits/stdc++.h>

using namespace std;

bool isprime(int n)
{
    if(n==1) return false;
    else if (n==2) return true;

    else if(n>2 && n%2==0) return false;
    else
    {
        for(int i=3;i<=sqrt(n);i+=2)
        {
            if(n%i==0) return false;
        }
    }
    return true;
}

int phi(const int n)
{
  // Base case
  if ( n < 2 )
    return 0;

  // Lehmer's conjecture
  if ( isprime(n) )
    return n-1;

  // Even number?
  if ( n & 1 == 0 ) {
    int m = n >> 1;
    return !(m & 1) ? phi(m)<<1 : phi(m);
  }

  // For all primes ...
  for ( std::vector<int>::iterator p = primes.begin();
        p != primes.end() && *p <= n;
        ++p )
  {
    int m = *p;
    if ( n % m  ) continue;

    // phi is multiplicative
    int o = n/m;
    int d = binary_gcd(m, o);
    return d==1? phi(m)*phi(o) : phi(m)*phi(o)*d/phi(d);
  }
}
int main()
{
    int num;

    scanf("%d",&num);

    printf("Phi(%d) = %d\n",num,phi(num));

    return 0;
}
