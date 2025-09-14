#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t; cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<long long> arr;
       for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
       } 

       // sort(arr.begin(), arr.end());
       if(arr[0] == 1 ) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       

    }





    return 0;
}