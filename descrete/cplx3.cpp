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

    int key,j;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j=i-1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j=j-1;
            counter++;
        }
        a[j+1] = key;

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
