#include<iostream>
using namespace std;
int operation(int x)
{
    int i=1;
    while(1)
    {

    if(x%2==1)
    {
        x=3*x+1;
    }
    else
    {
        x=x/2;
    }
    if(x==1)
    {
        break;
    }
    cout<<"i:"<<i<<"\tx:"<<x<<endl;
    i++;
    }

}
int main()
{
    int x;
    cin>>x;
    operation(x);
}
