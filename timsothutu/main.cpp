#include <bits/stdc++.h>
using namespace std;

int a[1000];
int f[1000] = {0};
int n;

void xuly()
{
    int d = 0;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!f[j])
        {
            a[i] = j;
            f[j] = 1;
            if (i == n)
                d++;
            else
                Try(i + 1);
            f[j] = 0;
        }
    }
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;
    Try(1);
    int d = 0;
    cout << d << endl;
    return 0;
}
