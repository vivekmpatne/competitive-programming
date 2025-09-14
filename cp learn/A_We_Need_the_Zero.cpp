#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long> arr;
        for(int i=0; i<n; i++){
            long long a; cin>>a;
            arr.push_back(a);
        }
        long long total_xor = 0;
        for(int i=0; i<n; i++){
            total_xor ^= arr[i];
        }
        if(n%2 == 1){
            cout<<total_xor<<endl;
        }
        else{
            if(total_xor == 0){
                cout<<total_xor<<endl;
            }
            else {
                cout<<-1<<endl;
             }
        }
    
    }
    return 0;
}