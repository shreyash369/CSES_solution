#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans(int ind,vector<pair<ll,ll>>& vec,vector<ll>& dp,vector<ll>& arr){
    if(ind==arr.size()) return 0;
    ll take=0,not_take=0;
    if(dp[ind]!=-1) return dp[ind];
    not_take=ans(ind+1,vec,dp,arr);
    int index=lower_bound(arr.begin(),arr.end(),vec[ind].second)-arr.begin();
    take=1+ans(index,vec,dp,arr);
    return dp[ind]=max(take,not_take);
}

int main(){
ll n; cin>>n;
vector<pair<ll,ll>> vec;
vector<ll> arr;
for(int i=0;i<n;i++){
    ll a,b; cin>>a>>b;
    vec.push_back({a,b});
    arr.push_back(a);
}
sort(vec.begin(),vec.end());
sort(arr.begin(),arr.end());
vector<ll> dp(n,-1);
cout<<ans(0,vec,dp,arr)<<endl;
return 0;
}