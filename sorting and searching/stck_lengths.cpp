#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n; cin>>n;
vector<ll> nums(n);
for(int i=0;i<n;i++) cin>>nums[i];
sort(nums.begin(),nums.end());
        vector<ll> ps(n,0);
        ps[0]=nums[0];
        for(int i=1;i<n;i++) ps[i]=ps[i-1]+nums[i];
        long long ans=ps[n-1]-(1LL*n*nums[0]);
        for(int i=1;i<n;i++){
            ll sum=(1LL*i*(nums[i]))-ps[i-1]+ps[n-1]-ps[i]-(1LL*(n-i-1)*nums[i]);
            ans=min(ans,sum);
        }
        cout<<ans<<endl;
return 0;
}