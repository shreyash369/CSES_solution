#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n,m, x;
cin>>n>>m>>x;
vector<ll> a(n),b(m);
for(int i=0;i<n;i++) cin>>a[i];
for(int j=0;j<m;j++) cin>>b[j];
sort(a.begin(),a.end());
sort(b.begin(),b.end());
int i=0,j=0,count=0;
while(i<n && j<m){
  if(a[i]<b[j]){
  while(i<n && a[i]+x <b[j]) i++;
  if(i<n && a[i]-x<=b[j] && b[j]<=a[i]+x){
    count++;
    i++;
    j++;
  }else{
    j++;
  }
  }else{
   while(j<m && a[i]-x >b[j]) j++;
   if(j<m && a[i]-x<=b[j] && b[j]<=a[i]+x){
    count++;
    i++;
    j++;
  }else{
    i++;
  }
  }
}
cout<<count<<endl;
return 0;
}