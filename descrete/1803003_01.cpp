#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll power(ll a,ll b,ll c,ll m){

    ll x = 1;
    x=(a*b*c)%m;
    return x;
}
ll powermodulo(ll a,ll b,ll c,ll m)
{
    ll ax=a%m;
    ll bx=b%m;
    ll cx=c%m;
    return power(ax,bx,cx,m);
}
int main()
{
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
    cout<<powermodulo(a,b,c,m);

}
