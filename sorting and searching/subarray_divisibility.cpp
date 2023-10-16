#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n; cin>>n;
vector<ll> arr(n,0);
unordered_map<int,int> mp;
mp[0]++;
ll sum=0,count=0;
for(int i=0;i<n;i++){
    int a;cin>>a;
    if(i==0) arr[i]=a;
    else arr[i]=arr[i-1]+a;
    sum+=a;
    int b=sum%n;
    if(b<0) b+=n;
    if(mp.find(b)!=mp.end()){
        count+=mp[b];
    }
    mp[b]++;
}
cout<<count<<endl;
return 0;
}