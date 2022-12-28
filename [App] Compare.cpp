#include <iostream>
using namespace std;
int chusangso (char x)
{
    return (int)x - ('0' - 0);
}
int multi (string x)
{
    int m = 0;
    int l = min((int)x.length(), 17);
    for (int i = l; i >= 1; i--){
        m = (131072 * chusangso(x[i-1]) + m) / 10;
    }
    int n = (m + 1) / 2;
    return n;
}
int main ()
{
    string a, b;
    cout << "Nhap 2 so de so sanh: ";
    cin >> a >> b;
    if (multi(a) > multi(b)) cout << a << " > " << b;
    else if (multi(a) < multi(b)) cout << a << " < " << b;
    else cout << a << '=' << b;
    return 0;
}