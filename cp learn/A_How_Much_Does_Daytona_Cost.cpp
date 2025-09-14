#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t; cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;
        int cont = 0;
        vector<long long> arr;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            arr.push_back(a);
        }
        for(int i=0; i<arr.size(); i++){
            if( k == arr[i]){      
                cont = 1;
                break;
            }
        }
        if(cont) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// TC = O(N).  SC = 0(1);