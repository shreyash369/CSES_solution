#include<bits/stdc++.h>
using namespace std;

int main(){
string s; cin>>s;
map<char,int> mp;
for(int i=0;i<s.size();i++) mp[s[i]]++;
string st="",en="";
char ch;
int count=0;
for(auto it:mp){
    if(it.second % 2 == 1){
        count++;
        ch=it.first;
    }
   int a=it.second;
   a/=2;
   while(a--){
    st.push_back(it.first);
   }
}
if(count>=2) cout<<"NO SOLUTION"<<endl;
else if(count==0){
    en=st;
    reverse(st.begin(),st.end());
    en+=st;
    cout<<en<<endl;
}else{
   en=st;
    reverse(st.begin(),st.end());
    en.push_back(ch);
    en+=st; 
    cout<<en<<endl;
}
return 0;
}