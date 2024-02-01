#include <bits/stdc++.h>
using namespace std;

int gcddequy(int a, int b)
{
    if (b == 0)
        return a;
    else
        return (b, a % b);
}

int lcm(int a, int b)
{
    int bcnn;
    bcnn = (a * b) / gcddequy(a, b);
    return bcnn;
}

int main()
{
    int x, y, z;

    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> x >> y >> z;

    int dem = 1;

    return 0;
}