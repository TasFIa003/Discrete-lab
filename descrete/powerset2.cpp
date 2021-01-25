#include<iostream>
#include<math.h>
using namespace std;

void powerset(char setA[],int set_size)
{
    int p=pow(2,set_size);

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<set_size;j++)
        {
            if(i &(1<<j))
                cout<<setA[j]<<" ";

        }
        cout<<endl;
    }
}


int main()
{
    char setA[]={'a','b','c'};

    powerset(setA,3);
}
