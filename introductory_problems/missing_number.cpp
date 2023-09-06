#include<bits/stdc++.h>
using namespace std;

int main(){
long long n; cin>>n;
vector<long long> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<bool> ans(n+1,0);
for(int i=0;i<n;i++){
    ans[arr[i]]=1;
}
for(int i=1;i<=n;i++){
    if(ans[i]==0){
        cout<<i<<endl;
        break;
    }
}
return 0;
}