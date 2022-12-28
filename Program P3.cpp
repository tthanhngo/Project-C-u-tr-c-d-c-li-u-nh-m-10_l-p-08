#include <iostream>
using namespace std;
int main ()
{
    int d[10];
    int n;
    cin >> n;
    int j = 0;
    int s = 10*n + 5;
    int t = 10;
    while (s > t){
        j++;
        d[j] = s / 65536;
        s = 10 * (s % 65536);
        t = 10 * t;
    }
    int k = j;
    for (int i = 1; i <= k; i++) cout << d[i];
    return 0;
}