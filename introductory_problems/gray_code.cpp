// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void all(int ind,string s,int n,vector<vector<string>>& arr){
//     if(ind==n){
//         int count=0;
//         for(int i=0;i<s.size();i++) if(s[i]=='1') count++;
//         arr[count].push_back(s);
//         return;
//     }
//     all(ind+1,s,n,arr);
//     s[ind]='1';
//     all(ind+1,s,n,arr);
//     return;
// }

// int main(){
// int t; cin>>t;
// vector<vector<string>> arr(t+1);
// string s(t,'0');
// all(0,s,t,arr);
// int first=0,second=1;
// vector<int> ind(t+1,0);
// int count=0;
// while(first<=t && second<=t){
//     if(count%2==0){
//         cout<<arr[first][ind[first]]<<endl;
//         ind[first]++;
//         if(ind[first]>=arr[first].size()) first=second+1;
//         count++;
//     }else{
//         cout<<arr[second][ind[second]]<<endl;
//         ind[second]++;
//         if(ind[second]>=arr[second].size()) second=first+1;
//         count++;
//     }
// }
// if(t%2==1 && t!=1) cout<<arr[t][0]<<endl;
// // cout<<count<<endl;
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int t; cin>>t;
vector<string> ans;
ans.push_back("0");
ans.push_back("1");
int count=1;
while(count<t){
    vector<string> ans2=ans;
    for(int i=0;i<ans.size();i++) ans[i].push_back('0');
    for(int i=0;i<ans2.size();i++) ans2[i].push_back('1');
    reverse(ans2.begin(),ans2.end());
    for(auto it:ans2){
        ans.push_back(it);
    }
    count++;
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
}
return 0;
}