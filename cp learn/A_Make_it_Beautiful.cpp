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
        
        sort(arr.begin(), arr.end());
        long long max_number = arr[n-1];
        long long min_number = arr[0];
        if(max_number == min_number){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<max_number<<" ";
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}