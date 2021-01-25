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

    /* for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }*/
    int num;
    cout<<"your number:";
    cin>>num;

    int x=1;
    int initialpos=1,lastpos=n;


    if( initialpos<=lastpos)
    {
        counter++;
        int mid=(int)((initialpos+lastpos)/2);
        counter++;
        if(a[mid]==num)
        {

            x=mid;
            counter++;

        }
        else if(a[mid]>num)
        {
            lastpos=mid-1;
            counter++;
        }
        else
        {
            initialpos=mid+1;
            counter++;
        }
        counter++;
        mid=(int)((initialpos+lastpos)/2);
        counter++;

    }

    if(x==-1)
    {
        cout<<"your expected number is not in the array"<<endl;
    }
    else
    {
        cout<<"the location of your number:"<<x<<endl;
    }

    cout<<"complexity:"<<counter;




}
