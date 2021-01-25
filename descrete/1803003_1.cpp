#include<bits/stdc++.h>
#include<math.h>
#include <time.h>
using namespace std;

int main(){

    int t, n;
    cin>>t>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    /*for(int i=0;i<n;i++){
        cout<<a[i];
    }*/
   //clock_t  t1;
   // t1=clock();
    int num_ppl=0,sum=0;
   for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>t){
            break;
        }
        else{
            num_ppl++;
        }
    }

    cout<<num_ppl;
   //t1=clock()-t1;
    //double T=(double)t1/CLOCKS_PER_SEC;cout<<T;

}
