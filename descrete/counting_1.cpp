#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a[1000];
     cout<<"Enter number of element"<<endl;
    cin>>n;
    vector<int>v1;
     cout<<"enter array element:"<<endl;
     for(int i=0;i<n;i++){
        cin>>a[i];
       v1.push_back(a[i]);
   }
    cout<<"longest Increasing Subsequence:"<<endl;
    vector<vector<int>>v2(n);
    v2[0].push_back(v1[0]);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v1[i]>v1[j] && v2.size()<v2.size()+1){
                v2[i]=v2[j];
            }

        }
        v2[i].push_back(v1[i]);
    }
    vector<int>mx1=v2[0];
    for(auto v1:v2)
    if(mx1.size()<v2.size()){
        mx1=v1;
    }
    for(auto x:mx1){
        cout<<x<<" ";
    }

     cout<<endl<<"longest Decreasing Subsequence:"<<endl;
    vector<vector<int>>v3(n);
    v3[0].push_back(v1[0]);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v1[i]<v1[j] && v3.size()<v3.size()+1){
                v3[i]=v3[j];
            }

        }
        v3[i].push_back(v1[i]);
    }
    vector<int>mx2=v3[0];
    for(v1:v3)
    if(mx2.size()<v3.size()){
        mx2=v1;
    }
    for(auto x:mx2){
        cout<<x<<" ";
    }

}
