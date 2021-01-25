#include <bits/stdc++.h>
using namespace std;

int modInverse(int a, int m)
{
    a = a % m;
    for (int x = 1; x < m; x++)
        if ((a * x) % m == 1)
            return x;
}


int main()
{
    int a , mod ;
    cin>>a>>mod;

    cout<<__gcd(a,mod)<<endl;




    cout << modInverse(a, mod);
    return 0;
}
