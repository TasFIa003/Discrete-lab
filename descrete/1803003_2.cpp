#include<iostream>
#include<math.h>
using namespace std;

int recursion(int num){

    if(num<=1) return num;
    return recursion(num-1)+recursion(num-2);

}



int main(){
    int n,finalNumber;
    cin>>n;
    for(int i=0;i<n;i++){
      finalNumber=recursion(i);
    }
    cout<<finalNumber;


}
