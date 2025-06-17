#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool first = true;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            int count = 0;
            while (n % i == 0) 
            {
                count++;
                n /= i;
            }
            if (!first) 
            {
                cout << "*";
            }
            cout << "(" << i << "^" << count << ")";
            first = false;
        }
    }
    if (n > 1) 
    {
        if (!first) 
        {
            cout << "*";
        }
        cout << "(" << n << "^1)";
    }
    cout << endl;
    return 0;
}
