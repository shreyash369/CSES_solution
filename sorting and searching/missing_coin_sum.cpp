#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n;cin>>n;
vector<ll> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr.begin(),arr.end());
ll curr=1,a=0;
for(int i=0;i<n;i++){
    if(arr[i]>curr){
        cout<<curr<<"\n";
        a++;
        break;
    }else{
        curr=curr+arr[i];
    }
}
if(a==0) cout<<curr<<endl;
return 0;
}