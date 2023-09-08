#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll a,b; cin>>a>>b;
vector<ll> arr(a);
for(int i=0;i<a;i++) cin>>arr[i];
sort(arr.begin(),arr.end());
ll count=0;
ll st=0,en=a-1;
while(st<=en){
    ll sum=arr[st]+arr[en];
    if(sum<=b){
        count++;
        st++;
        en--;
    }else{
        count++;
        en--;
    }
}
cout<<count<<endl;
return 0;
}