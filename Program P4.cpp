#include <iostream>
using namespace std;
int main ()
{
    int d[10];
    int m,n;
    cin >> n;
    cin >> m;
    int j = 0;
    int s = 10*n + 4;
    int t = 10;
    while (s >= t){
        if(t>m)
        {
        	s = s + 1 + (m/2) - (t/2);
        	j = j + 1;
        	d[j] = s/m;
        	s = 10*(s%m) + 9;
        	t = 10*t;
		}
    }
    int k = j;
    for (int i = 1; i <= k; i++) 
		cout << d[i];
    return 0;
}
