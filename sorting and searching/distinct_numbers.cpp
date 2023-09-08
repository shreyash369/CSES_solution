#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n; cin>>n;
vector<ll> arr(n);
set<ll> st;
for(int i=0;i<n;i++){
    cin>>arr[i];
    st.insert(arr[i]);
}
cout<<st.size()<<endl;
return 0;
}