#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long a, b, n;
        cin>>a>>b>>n;
        long long arr[n];  
        //vector<long long> arr(n);  in this qus vector is not giving right output.
        for(int i=0; i<n; ++i){
            cin>>arr[i];
           //long long x; cin>>x;
           //arr.push_back(x);
        }
        long long max_time = b;
        for(int i=0; i<n; ++i){
            max_time += min(arr[i], a-1);
        }
        cout<<max_time<<endl;
    }
    return 0;
}