#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n; cin>>n;
vector<pair<ll,ll>> arr;
for(int i=0;i<n;i++){
    ll a,b; cin>>a>>b;
    arr.push_back({a,0});
    arr.push_back({b,1});
}
sort(arr.begin(),arr.end());
ll count=0;
ll ans=0;
for(int i=0;i<arr.size();i++){
    if(arr[i].second==0) count++;
    else count--;
    ans=max(ans,count);
}
cout<<ans<<endl;
return 0;
}