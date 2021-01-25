#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
ll size(vector<ll> const& p) 
{
    ll n=p.size();
    vector<ll> dp(n,1);
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<i;j++) {
            if(p[j]<p[i])
                dp[i]=max(dp[i],dp[j]+1);
        }
    }

    ll ans=dp[0];
    for(int i=1;i<n;i++) {
        ans=max(ans,dp[i]);
    }
    return ans;
}
vector<ll>longest_subseq(vector<ll> const& p) {
    ll n=p.size();
    vector<ll> dp(n,1),pr(n,-1);
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<i;j++) {
            if(p[j]<p[i]&&dp[i]<dp[j]+1)
			 {
                dp[i]=dp[j]+1;
                pr[i]=j;
            }
        }
    }

    ll ans=dp[0],idx=0;
    for(ll i=1;i<n;i++)
	 {
        if(dp[i]>ans) 
		{
            ans=dp[i];
            idx=i;
        }
    }

    vector<ll> subseq;
    while(idx!=-1) 
	{
        subseq.pb(p[idx]);
        idx=pr[idx];
    }
    reverse(subseq.begin(), subseq.end());
    return subseq;
}
int main(){

    ll n,x;
     cout<<"Enter number of elements"<<endl;
    cin>>n;
    vector<ll>p;
     cout<<"enter elements :"<<endl;
     for(ll i=0;i<n;i++){
        cin>>x;
       p.pb(x);
   }
    cout<<"Longest Increasing Subsequence:"<<endl;
    /*vector<vector<ll>>q(n);
    q[0].pb(p[0]);
    for(ll i=1;i<n;i++)
	{
        for(ll j=0;j<i;j++)
		{
            if(p[i]>p[j]&&q.size()<q.size()+1)
			{
                q[i]=q[j];
            }

        }
        q[i].pb(p[i]);
    }
    vector<ll>mx=q[0];
    for(vector<ll> p:q){
    if(mx.size()<q.size())
	{
        mx=p;
    }
	}*/
	ll ans=size(p);
	cout<<ans<<endl;
	vector<ll>mx=longest_subseq(p);
    for(auto i : mx){
        cout<<i<<" ";
    }
	cout<<endl;
	//q.clear();
    cout<<"Longest Decreasing Subsequence: "<<endl;
    vector<vector<ll>>r(n);
    r[0].pb(p[0]);
    for(ll i=1;i<n;i++){
        for(ll j=0;j<i;j++){
            if(p[i]<p[j]&&r.size()<r.size()+1){
                r[i]=r[j];
            }

        }
        r[i].pb(p[i]);
    }
    vector<ll>mn=r[0];
    for(vector<ll> p:r)
    if(mn.size()<r.size()){
        mn=p;
    }
    for(auto i : mn){
        cout<<i<<" ";
    }
    cout<<endl;

}
