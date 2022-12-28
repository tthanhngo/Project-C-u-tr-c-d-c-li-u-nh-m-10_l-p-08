#include <iostream>
#include <string.h>
using namespace std;
int chusangso (char x)
{
    return (int)x - ('0' - 0);
}
int main ()
{
    string s;
    cin >> s;
    double m = 0;
    int l = min((int)s.length(), 17);
    for (int i = l; i >= 1; i--){
        m = (131072 * chusangso(s[i-1]) + m) / 10;
    }
    double n = (m + 1) / 2;
    cout << m << " " << n;
    return 0;
}
