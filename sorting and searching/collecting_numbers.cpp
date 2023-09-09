#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n; cin>>n;
vector<ll> arr(n);
vector<pair<ll,ll>> nums;
for(int i=0;i<n;i++){
cin>>arr[i];
nums.push_back({arr[i],i});
}
sort(nums.begin(),nums.end());
ll count=1,curr=-1;
for(int i=0;i<n;i++){
  if(nums[i].second<curr){
    count++;
    curr=nums[i].second;
  }else{
    curr=nums[i].second;
  }
}
cout<<count<<endl;
return 0;
}