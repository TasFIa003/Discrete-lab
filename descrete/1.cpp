#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll powermodulo(string a,ll m)
{
    ll ax = 0;
    for (int i = 0; i < a.length(); i++)
        ax = (ax *10 + (a[i] - '0')) %m;

    return ax;
}
int main()
{
   string n;
   ll m;
   cin>>n>>m;
    cout<<powermodulo(n,m);
}

