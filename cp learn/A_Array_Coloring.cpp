#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t; cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            arr.push_back(a);
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        if(sum%2 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}