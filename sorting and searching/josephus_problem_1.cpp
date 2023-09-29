#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

int main(){
int n; cin>>n;
tree < int ,  null_type ,  less<int> ,  rb_tree_tag ,  tree_order_statistics_node_update > T;
for(int i=1;i<=n;i++) T.insert(i);
int k=1;
int idx=0;
while(T.size()){
 idx=(idx+k)%T.size();
 int x=*T.find_by_order(idx);
 cout<<x<<endl;
 T.erase(x);
}
return 0;
}