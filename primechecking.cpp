#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long n;
    cin >> n;
    bool isPrime = true;
    if (n <= 1) 
    {
        isPrime = false;
    } 
    else 
    {
        for (int i = 2; i <= sqrt(n); i++) 
        {
            if (n % i == 0) 
            {
                isPrime = false;
                break;
            }
        }
    }
    cout << (isPrime ? "YES" : "NO");
    /*if (isPrime) {
                    cout << "YES"<<endl;
                   } 
                    else 
                    {
                       cout << "NO"<<endl;
                     }
    */
    return 0;
}
