#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll x,vector<int>& arr,vector<ll>& dp){
  if(x==0) return 0;
  if(x<0) return INT_MAX;
  if(dp[x]!=-1) return dp[x];
  ll ans=INT_MAX;
  for(int i=0;i<arr.size();i++){
    ll a=1+f(x-arr[i],arr,dp);
    ans=min(ans,a);
  }
  return dp[x]=ans;
}

int main(){
ll n,x; cin>>n>>x;
vector<ll> dp(x+1,-1);
vector<int> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
ll ans=f(x,arr,dp);
if(ans>=INT_MAX) cout<<-1<<endl;
else cout<<ans<<endl;
return 0;
}
