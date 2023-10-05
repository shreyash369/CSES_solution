#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n,x; cin>>n>>x;
vector<pair<ll,int>> arr;
for(int i=0;i<n;i++){
  ll b; cin>>b;
  arr.push_back({b,i+1});
}
sort(arr.begin(),arr.end());
int a=0;
for(int i=0;i<n;i++){
  ll target=x-arr[i].first;
  int front=i+1,back=n-1;
  while(front<back){
    ll sum=arr[front].first+arr[back].first;
    if(sum<target) front++;
    else if(sum>target) back--;
    else{
       cout<<arr[i].second<<" "<<arr[front].second<<" "<<arr[back].second<<endl;
       a++;
    }
    if(a!=0) break;
  }
  if(a!=0) break;
}
if(a==0) cout<<"IMPOSSIBLE"<<endl;
return 0;
}