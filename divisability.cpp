#include <iostream>
using namespace std;
int main() 
{
    long long A, B, X, max, min, sum_max = 0, sum_min = 0, result = 0;
    cin >> A >> B >> X;
    if (A > B) 
    {
        max = A;
        min = B;
    } 
    else 
    {
        max = B;
        min = A;
    }
    sum_max = (max / X) * ((max / X) + 1) / 2;
    sum_min = ((min - 1) / X) * (((min - 1) / X) + 1) / 2;
    result = (sum_max * X) - (sum_min * X);

    cout << result << endl;
    return 0;
}
