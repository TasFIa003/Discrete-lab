#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact*= i;
        }
    return fact;
}

int main(){

    int n,n_fact,r_fact,power_x,power_y;
    cout<<"enter the power of (x+y):";
    cin>>n;

    int N=factorial(n);
    cout<<"series of (x+y)^"<<n<<" is :";
    for(int r=0;r<n+1;r++){

        n_fact=factorial(n-r);
        r_fact=factorial(r);

        power_x=n-r;
        power_y=r;

        int c=N/(n_fact*r_fact);

        cout<<c<<"x^"<<power_x<<"y^"<<power_y<<" + ";


    }



}
