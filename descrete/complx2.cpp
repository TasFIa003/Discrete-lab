#include<bits/stdc++.h>
using namespace std;

int main()
{

    int counter=0,n,a[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++)
    {

        for(int j=0; j<n-i-1; j++)
        {
            counter++;
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                counter++;
            }

        }


    }

    cout<<"after sorting :"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"time complexity:";
    cout<<counter;




}
