// #include<bits/stdc++.h>
// using namespace std;
// // #define int long long 

// bool isaval(vector<vector<char>> ch,int row,int col){
//     for(int i=0;i<8;i++){
//         if(ch[row][i]=='Q' || ch[i][col]=='Q') return false;
//     }
//     int i,j;
//     for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
//         if (ch[i][j]=='Q')
//             return false;

//     for (i = row, j = col; j >= 0 && i < 8; i++, j--)
//         if (ch[i][j]=='Q')
//             return false;
//     return true;
// }

// void f(int row,vector<vector<char>> ch,int& ans){
//     if(row==8){
//         ans++;
//         return;
//     }
//     for(int i=0;i<8;i++){
//         if(ch[row][i]=='.'){
//             if(isaval(ch,row,i)){
//                 ch[row][i]='Q';
//                 f(row+1,ch,ans);
//                 ch[row][i]='.';
//             }
//         }
//     }
//     return;
// }

// int main(){
// vector<vector<char>> ch(8,vector<char>(8));
// for(int i=0;i<8;i++){
//     for(int j=0;j<8;j++){
//         cin>>ch[i][j];
//     }
// }
// int ans=0;
// f(0,ch,ans);
// cout<<ans<<endl;
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
// #define int long long 
void dfs(int r,int& ans,vector<vector<char>>& arr,int n){
        if(r==n){
            ans++;
            return;
        }
        for(int i=0;i<n;i++){
            if(arr[r][i]=='*') continue;
            int row=r,col=i;
            int a=0;
            for(int j=0;j<n;j++){
                if(arr[r][j]=='Q'){
                    a=1;
                    break;
                }
                if(arr[j][col]=='Q'){
                    a=1;
                    break;
                }
            }
            int y=row,z=col;
          while(y<n && z<n){
              if(arr[y][z]=='Q'){
                  a=1;
                  break;
              }
              y++;
              z++;
          }
          y=row,z=col;
          while(y>=0 && z>=0){
              if(arr[y][z]=='Q'){
                  a=1;
                  break;
              }
              y--;
              z--;
          }
         y=row,z=col;
          while(y>=0 && z<n){
              if(arr[y][z]=='Q'){
                  a=1;
                  break;
              }
              y--;
              z++;
          }
        y=row,z=col;
          while(y<n && z>=0){
              if(arr[y][z]=='Q'){
                  a=1;
                  break;
              }
              y++;
              z--;
          }
        if(a==1) continue;
         arr[row][col]='Q';
           dfs(r+1,ans,arr,n);
        arr[row][col]='.';
        }
        return;
    }
int main(){
int ans=0;
vector<vector<char>> ch(8,vector<char>(8));
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cin>>ch[i][j];
    }
}
dfs(0,ans,ch,8);
cout<<ans<<endl;
return 0;
}