#include<bits/stdc++.h>
using namespace std;

int main(){
string s; cin>>s;
long long ans=0;
long long count=1;
for(int i=0;i<s.size()-1;i++){
 if(s[i]==s[i+1]) count++;
 else{
   ans=max(ans,count);
   count=1;
 }
}
ans=max(ans,count);
cout<<ans<<endl;
return 0;
}