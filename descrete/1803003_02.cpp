#include<bits/stdc++.h>
using namespace std;
int modularfunction(int power, int b, int m)
{
    int x = 1;
    power = power % m;
    for(int i=1 ; i<=b ; i++){
            x= (x * power) % m;
        //power = power*power;
        }
    return x;
}
int main()
{
    int a,power,mod;
    cin>>a>>power>>mod;
    cout<<"( "<<a<<" pow "<<power<<" ) %"<<mod<<"= ";
    cout<<modularfunction(a, power, mod)<<endl;

    return 0;
}
