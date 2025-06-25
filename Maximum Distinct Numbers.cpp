#include <iostream>
using namespace std;
int main() 
{
    long long N;
    cin >> N;
    for (long long i = 1; ; i++) 
    {
        if (i > N) 
        {
            cout << (i - 1) << endl;
            return 0;
        } 
        else 
        {
            N -= i;
        }
    }
    return 0;
}
