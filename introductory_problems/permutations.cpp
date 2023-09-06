#include<bits/stdc++.h>
using namespace std;

int main(){
long long n; cin>>n;
if(n==1) cout<<1<<endl;
else if(n==4) cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
else if(n>4){
    long long a=1,b=2;
    while(a<=n){
        cout<<a<<" ";
        a+=2;
    }
    while(b<=n){
        cout<<b<<" ";
        b+=2;
    }
}else{
    cout<<"NO SOLUTION"<<endl;
}
return 0;
}