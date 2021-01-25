#include<bits/stdc++.h>
using namespace std;

#define  ll long long int

ll factorial(ll n){

     ll fact = 1;
    for (int i = 2; i <= n; i++) {
        fact*= i;
        }
    return fact;

}

void r_permutation(ll n,ll r){

    ll result=factorial(n)/factorial(n-r);

    cout<<"r_permutation of "<<n<<" and "<<r<<" is : "<<result<<endl;


}

void r_combination(ll n,ll r){

    ll result=factorial(n)/(factorial(r)*factorial(n-r));

    cout<<"r_combinations of "<<n<<" and "<<r<<" is : "<<result<<endl;


}

int main(){

    ll n,r;
    cout<<"enter numbers:"<<endl;
    cin>>n>>r;

    r_permutation(n,r);
    r_combination(n,r);


}

