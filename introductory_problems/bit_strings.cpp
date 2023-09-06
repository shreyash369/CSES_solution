#include<bits/stdc++.h>
using namespace std;

int main(){
long long ans=1;
int n; cin>>n;
int mod=1e9 +7;
while(n--){
    ans=((ans % mod)*2)% mod;
}
cout<<ans<<endl;
return 0;
}