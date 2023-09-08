#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,x; cin>>n>>x;
    vector<ll> arr(n);
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]].push_back(i);
    }
    int a=0;
    for(int i=0;i<n;i++){
        if(mp.find(x-arr[i])!=mp.end()){
            for(auto it:mp[x-arr[i]]){
                if(it!=i){
                    a++;
                    cout<<i+1<<" "<<it+1<<endl;
                    break;
                }
            }
            if(a!=0) break;
        }
    }
    if(a==0) cout<<"IMPOSSIBLE"<<endl;
return 0;
}