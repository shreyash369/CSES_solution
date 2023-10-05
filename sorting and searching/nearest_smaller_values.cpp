#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n; cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
vector<int> pos(n,0);
stack<pair<int,int>> st;
for(int i=n-1;i>=0;i--){
    if(st.empty()){
        st.push({arr[i],i});
        continue;
    }
    while(!st.empty() && st.top().first>arr[i]){
        pos[st.top().second]=i+1;
        st.pop();
    }
    st.push({arr[i],i});
}
for(int i=0;i<n;i++) cout<<pos[i]<<endl;
return 0;
}