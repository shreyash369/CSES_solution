#include<bits/stdc++.h>
using namespace std;

int main(){
long long n; cin>>n;
if(n*(n+1) %4==0){
    cout<<"YES"<<endl;
    vector<int> arr1;
    vector<int> arr2;
    int count=0,i=2;
    arr1.push_back(1);
    if(n%2==0){
        while(i<=n){
        if(count%4 < 2) arr2.push_back(i);
        else arr1.push_back(i);
        count++;
        i++;
        }
    }else{
        if(n>3) arr2.push_back(4);
        arr2.push_back(3);
        arr1.push_back(2);
        // arr1.push_back(4);
        i=5;
        while(i<=n){
            if(count%4 <2) arr1.push_back(i);
            else arr2.push_back(i);
            i++;
            count++;
        }
    }
        cout<<arr1.size()<<endl;
        for(int i=0;i<arr1.size();i++) cout<<arr1[i]<<" ";
        cout<<endl;
        cout<<arr2.size()<<endl;
        for(int i=0;i<arr2.size();i++) cout<<arr2[i]<<" ";
}
else cout<<"NO"<<endl;
return 0;
}