#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

ll f(ll x,vector<int>& arr,vector<ll>& dp){
  if(x==0) return 1;
  if(x<0) return 0;
  if(dp[x]!=-1) return dp[x];
  ll ans=0;
  for(int i=0;i<arr.size();i++){
    ll a=f(x-arr[i],arr,dp);
    a%=mod;
    ans+=a;
    ans%=mod;
  }
  return dp[x]=ans;
}

int main(){
ll n,x; cin>>n>>x;
vector<ll> dp(x+1,-1);
vector<int> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
ll ans=f(x,arr,dp);
cout<<ans<<endl;
return 0;
}
