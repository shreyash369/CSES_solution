#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n,k; cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll start=0,end=0,unique=0;
ll ans=0;
unordered_map<int,int> mp;
while(end<n){
   mp[arr[end]]++;
   if(mp[arr[end]]==1) unique++;
   if(unique>k){
    ans+=((end-start)*(end-start+1))/2;
    while(unique>k && start<=end){
        mp[arr[start]]--;
        if(mp[arr[start]]==0) unique--;
        start++;
    }
    ans-=((end-start)*(end-start+1))/2;
   }
   end++;
}
ans+=((end-start)*(end-start+1))/2;
cout<<ans<<endl;
return 0;
}