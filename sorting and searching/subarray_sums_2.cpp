#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n ,x; cin>>n>>x;
vector<ll> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
ll count=0;
ll sum=0;
map<ll,ll> mp;
mp[0]++;
for(int i=0;i<n;i++){
  sum+=arr[i];
  ll target=sum-x;
  if(mp.find(target)!=mp.end()){
    count+=mp[target];
  }
  mp[sum]++;
}
cout<<count<<endl;
return 0;
}