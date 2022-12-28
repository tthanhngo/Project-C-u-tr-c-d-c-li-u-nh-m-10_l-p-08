#include <iostream>
using namespace std;
int ans[10];
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
void decimal (int x, int& k)
{
    int j = 0;
    int s = 10*x + 5;
    int t = 10;
    while (s > t){
        if (t > 65536) s = s + 32768 - (t/2);
        j++;
        ans[j] = s / 65536;
        s = 10 * (s % 65536);
        t = 10 * t;
    }
    k = j;
}
int main ()
{
    //Dieu kien tong cua 2 so < 1 - 2^-17
    string a, b;
    cout << "Nhap 2 so can cong: ";
    cin >> a >> b;
    int c = multi(a) + multi(b);
    int k = 0;
    decimal(c,k);
    for (int i = 1; i <= k; i++) cout << ans[i];
    return 0;
}