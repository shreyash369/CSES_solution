// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// ll p(int n){
//     ll res=1;
//     for(int i=0;i<n;i++){
//         res*=10;
//     }
//     return res;
// }

// int main(){
// int t; cin>>t;
// while(t--){
//   ll n; cin>>n;
//   int curr=1;
//   if(n<=9){
//      cout<<n<<endl;
//   }else{
//     n--;
//     while(9*p(curr-1)*curr<n){
//         n-=9*p(curr-1)*curr;
//         curr++;
//     }
//     string num=to_string(p(curr-1)+n/curr);
//     cout<<num[n%curr]-'0'<<endl;
//   }
// }
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
 
long long p(int n){
  long long res=1;
  for(int i=0;i<n;i++){
    res*=10;
  }
  return res;
}
int main(){
int t; cin>>t;
while(t--){
long long n; cin>>n;
long long curr_length=1,number=9;
        while(n>(long long)(1LL*curr_length*number)){
            n-=curr_length*number;
            curr_length++;
            number*=10;
        }
        long long num=p(curr_length-1)+(n-1)/curr_length;
        string s=to_string(num);
        cout<<s[(n-1)%curr_length]-'0'<<endl;
}
return 0;
}
