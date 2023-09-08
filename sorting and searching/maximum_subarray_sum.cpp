#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n; cin>>n;
vector<ll> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
ll sum=0,curr_sum=INT_MIN;
for(int i=0;i<n;i++){
    sum+=arr[i];
    curr_sum=max(curr_sum,sum);
    if(sum<0) sum=0;
}
cout<<curr_sum<<endl;
return 0;
}