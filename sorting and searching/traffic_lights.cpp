#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n,x; cin>>n>>x;
set<ll> st;
st.insert(0);
st.insert(n);
multiset<ll> st2;
st2.insert(n);
for(int i=0;i<x;i++){
  ll a;cin>>a;
  auto itr=st.lower_bound(a);
  if(*itr==a){
    cout<<*st2.rbegin()<<endl;
    continue;
  }else{
    int right=*itr;
    itr--;
    int left=*itr;
    st.insert(a);
    st2.erase(st2.find(right-left));
    st2.insert(right-a);
    st2.insert(a-left);
    cout<<*st2.rbegin()<<endl;
  }
}
return 0;
}