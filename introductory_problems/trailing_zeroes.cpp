#include<bits/stdc++.h>
using namespace std;

int main(){
long long n; cin>>n;
long long ans=0,a=5;
while(a<=n){
    ans+=n/a;
    a*=5;
}
cout<<ans<<endl;
return 0;
}