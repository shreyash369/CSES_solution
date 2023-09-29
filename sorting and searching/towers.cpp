#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n; cin>>n;
vector<int> arr;
while(n--){
    int a;cin>>a;
    int index=upper_bound(arr.begin(),arr.end(),a)-arr.begin();
    if(index==arr.size()) arr.push_back(a);
    else{
        if(arr[index]>a) arr[index]=a;
        else if(arr[index]==a){
            index++;
            if(index==arr.size()) arr.push_back(a);
            else arr[index]=a;
        }
    }
}
cout<<arr.size()<<endl;
return 0;
}