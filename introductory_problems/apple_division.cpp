#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void f(int ind,ll sum,ll& _sum,vector<ll>& arr,ll& ans){
    if(ind==arr.size()){
         ans=min(ans,abs(abs(sum-_sum)-sum));
         return;
    }
    f(ind+1,sum+arr[ind],_sum,arr,ans);
    f(ind+1,sum,_sum,arr,ans);
    return;
}

int main(){
ll n; cin>>n;
vector<ll> arr(n);
ll sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}
ll ans=INT_MAX;
f(0,0,sum,arr,ans);
cout<<ans<<endl;
return 0;
}