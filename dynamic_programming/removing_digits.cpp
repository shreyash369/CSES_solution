#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans(ll n,vector<ll>& dp){
    if(n==0) return 0;
    if(n<10) return 1;
    if(dp[n]!=-1) return dp[n];
    ll b=n;
    ll ret=INT_MAX;
    while(b>0){
      ll c=b%10;
      b/=10;
      if(c!=0) ret=min(ret,1+ans(n-c,dp));
    }
    return dp[n]=ret;
}

int main(){
ll n; cin>>n;
vector<ll> dp(n+1,-1);
cout<<ans(n,dp)<<endl;
return 0;
}