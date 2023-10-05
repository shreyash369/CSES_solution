#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool vis[8][8];
int ans;
const int n=7;
string s;

void dfs(int x,int y,int i){
    if(x==7 && y==1 && i==48){
        ans+=1;
        // cout<<1<<endl;
        return;
    }
    if(x==7 && y==1) return;
    if((x+1>7 || vis[x+1][y]==1) && (x-1<1 || vis[x-1][y]==1)){
        if((y-1>=1 && vis[x][y-1]==0) && (y+1<=7 && vis[x][y+1]==0)) return;
    }
    if((y+1>7 || vis[x][y+1]==1) && (y-1<1 || vis[x][y-1]==1)){
        if((x-1>=1 && vis[x-1][y]==0 && x+1<=7 && vis[x+1][y]==0)) return;
    }
    vis[x][y]=true;
    if(s[i]=='U' || s[i]=='?'){
        if(x>1 && vis[x-1][y]==0) dfs(x-1,y,i+1);
    }
    if(s[i]=='D' || s[i]=='?'){
        if(x<7 && vis[x+1][y]==0) dfs(x+1,y,i+1);
    }
    if(s[i]=='L' || s[i]=='?'){
        if(y>1 && vis[x][y-1]==0) dfs(x,y-1,i+1);
    }
    if(s[i]=='R' || s[i]=='?'){
        if(y<7 && vis[x][y+1]==0) dfs(x,y+1,i+1);
    }
    vis[x][y]=false;
    return;
}

int main(){
cin>>s;
dfs(1,1,0);
cout<<ans<<endl;
return 0;
}