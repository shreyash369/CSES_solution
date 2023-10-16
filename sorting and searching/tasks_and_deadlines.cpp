#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n; cin>>n;
vector<vector<int>> arr(n,vector<int>(2));
for(int i=0;i<n;i++){
  cin>>arr[i][0]>>arr[i][1];
}
sort(arr.begin(),arr.end());
ll curr=0,ans=0;
for(int i=0;i<n;i++){
    curr+=arr[i][0];
    ans+=arr[i][1]-curr;
}
cout<<ans<<endl;
return 0;
}