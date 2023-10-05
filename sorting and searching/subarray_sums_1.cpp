#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n ,x; cin>>n>>x;
vector<int> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
int count=0;
ll sum=0;
int last=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
    while(sum>x){
        sum-=arr[last];
        last++;
    }
    if(sum==x) count++;
}
cout<<count<<endl;
return 0;
}