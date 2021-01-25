#include<iostream>
using namespace std;

void powerset(string str,int index=-1,string current="")
{
    int n=str.length();

    if(index==n)
        return;
    cout<<current<<"\n"<<endl;

    for(int i=index+1;i<n;i++)
    {
        current+=str[i];

        powerset(str,i,current);
    }
}
int main()
{
    string str="123456";
    powerset(str);

}
