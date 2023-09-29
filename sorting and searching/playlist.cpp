#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n; cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
int ans=0,check=-1;
map<int,int> mp;
for(int i=0;i<n;i++){
    if(mp.find(arr[i])!=mp.end()){
        check=max(check,mp[arr[i]]);
        ans=max(ans,i-check);
        mp[arr[i]]=i;
    }else{
        ans=max(ans,i-check);
        mp[arr[i]]=i;
    }
}
cout<<ans<<endl;
return 0;
}