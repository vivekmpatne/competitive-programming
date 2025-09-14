#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long operations_count = 0;
        for(int i=0; i<n-1; i++){
            if( (arr[i]%2) == (arr[i+1]%2) )
                 operations_count += 1;
        }
        cout<<operations_count<<endl;
    }
    return 0;
}