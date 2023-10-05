#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int mod=1e9+7;

ll ans(ll n,vector<ll>& dp){
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=(ans(n-1,dp)+ans(n-2,dp)+ans(n-3,dp)+ans(n-4,dp)+ans(n-5,dp)+ans(n-6,dp))%mod;
}

int main(){
ll n;cin>>n;
vector<ll> dp(n+1,-1);
cout<<ans(n,dp)<<endl;
return 0;
}