#include<bits/stdc++.h>
using namespace std;

long long fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
void f(string str,vector<int> vis,set<string>& st,string s){
if(str.size()==s.size()){
    if(st.find(str)==st.end()){
        st.insert(str);
        return;
    }
}
for(int i=0;i<s.size();i++){
    if(vis[i]==0){
        str.push_back(s[i]);
        vis[i]=1;
        f(str,vis,st,s);
        str.pop_back();
        vis[i]=0;
    }
}
return;
}
int main(){
string s; cin>>s;
unordered_map<char,int> mp1;
set<string> st;
for(auto it:s){
    mp1[it]++;
}
long long ans=fact(s.size());
for(auto it:mp1){
    long long a=fact(it.second);
    ans/=a;
}
cout<<ans<<endl;
vector<int> vis(s.size(),0);
string str="";
f(str,vis,st,s);
for(auto it:st) cout<<it<<endl;
return 0;
}