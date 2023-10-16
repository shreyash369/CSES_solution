#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n; cin>>n;
vector<ll> arr(n);
ll sum=0,maxi=INT_MIN;
for(int i=0;i<n;i++){
  cin>>arr[i];
  sum+=arr[i];
  maxi=max(maxi,arr[i]);
}
sum-=maxi;
if(maxi>=sum) cout<<maxi*2<<endl;
else cout<<sum+maxi<<endl;
return 0;
}