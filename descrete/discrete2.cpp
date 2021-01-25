#include<iostream>

using namespace std;

int operation(int x[],int y[],int n,int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<x[i]<<"\t"<<y[j]<<"\t";
            if(x[i]+y[j]==0)
            {
                cout<<"true"<<endl;
            }
            else
                cout<<"false"<<endl;
        }
    }
    int result[100][100];
    int flag=0,counter=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            result[i][j]=x[i]+y[j];
            if(result[i][j]!=0)
            {
                flag=1;
            }
            else
            {
                counter++;
            }
        }
    }
    if(flag==1)
        cout<<"for all x and y this case is false"<<endl;
    else
        cout<<"for all x and y this case is true"<<endl;

    int flag2=0,flag3=0,counter1=0;
    for(int i=0; i<n; i++)
    {
        counter1=0;
        for(int j=0; j<m; j++)
        {
            result[i][j]=x[i]+y[j];
            if(result[i][j]!=0)
            {
                flag=1;
            }
            else
            {
                flag2=1;
                counter1++;
            }
        }
        if(m==counter1)
        {
            flag3=1;
        }
    }

    if(flag3==1)
        cout<<"for some of x and all of y this case is true"<<endl;
    else
        cout<<"for some of x and all of y this case is false"<<endl;

    if(n==counter1)
        cout<<"for all of x and some of y this case is true"<<endl;
    else
        cout<<"for all of x and some of y this case is false"<<endl;

    if(flag2==1)
        cout<<"for some of x and some of y this case is true"<<endl;
    else
        cout<<"for some of x and some of y this case is false"<<endl;
}
int main()
{
    int x[100],y[100];
    int n;
    cin>>n;
    cout<<"domain of x:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    int m;
    cin>>m;
    cout<<"domain of y:"<<endl;
    for(int i=0; i<m; i++)
    {
        cin>>y[i];
    }
    cout<<endl;
    operation(x,y,n,m);
}
