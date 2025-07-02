#include <iostream>
#include <vector>
using namespace std;
vector<bool> sieve(int n)
{
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2; i*i<=n; i++)
        {
        if(prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
                prime[j]=false;
        }
    }
    return prime;
}
int main()
{
    int n;
    cin >> n;
    vector<bool> isPrime = sieve(n);
    cout << (isPrime[n] ? "YES" : "NO");
    return 0;
}
