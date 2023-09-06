#include<bits/stdc++.h>
using namespace std;
// #define int long long 

int main(){
long long n; cin>>n;
long long last=6;
long long last2=0,curr=4;
long long i=1;
while(i<=n){
    if(i==1) cout<<0<<endl;
    else if(i==2) cout<<6<<endl;
    else{
        long long ans=last;
        long long alag=(2*i -1)*(i-1)*(i-1)-4-((2*i -5)*2);
        long long same=((2*i -1)*(2*i -2) -4)/2;
        ans+=alag;
        ans+=same;
        last=ans;
        if(i>3){
            last2+=curr;
            curr+=4;
            ans-=last2;
        }
        cout<<ans<<endl;
    }
    i++;
}
return 0;
}