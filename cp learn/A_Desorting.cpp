#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long> arr;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            arr.push_back(a);
        }
        long long oper = INT_MAX;
        for(int i=0; i<n-1; i++){
            if(arr[i] <= arr[i+1]){
                long long dif = arr[i+1] - arr[i];
                long long require_dif = dif/2 + 1;
                oper = min(oper, require_dif);
            } else { oper = 0; }
        }
        cout<<oper<<endl;
    }
    return 0;
}