#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
int n,m,a;cin>>n>>m;
multiset<int> st;
for(int i=0;i<n;++i){
    cin>>a;
    st.insert(a);
}
for(int i=0;i<m;++i){
    cin>>a;
auto it=st.upper_bound(a);
if(it==st.begin()){
    cout<<-1<<"\n";
}else{
    --it;
    cout<<*it<<"\n";
    st.erase(it);
}
}
return 0;
}
