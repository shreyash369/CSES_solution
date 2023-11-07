#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

int ans(int i,int j,vector<vector<char>>& arr,vector<vector<int>>& dp){
    if(i==arr.size()-1 && j==arr.size()-1) return arr[i][j]!='*';
    if(dp[i][j]!=-1) return dp[i][j];
    int ret=0;
    if(i+1<arr.size() && arr[i+1][j]!='*') ret+=ans(i+1,j,arr,dp);
    ret%=mod;
    if(j+1<arr.size() && arr[i][j+1]!='*') ret+=ans(i,j+1,arr,dp);
    ret%=mod;
    return dp[i][j]=ret;
}

int main(){
int n; cin>>n;
vector<vector<char>> arr(n,vector<char>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) cin>>arr[i][j];
}
if(arr[0][0]=='*'){
    cout<<0<<endl;
    return 0;
}
vector<vector<int>> dp(n,vector<int>(n,-1));
cout<<ans(0,0,arr,dp)<<endl;
return 0;
}