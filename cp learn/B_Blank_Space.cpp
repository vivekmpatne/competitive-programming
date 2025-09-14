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

        int count = 0;
        int len_count = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == 0){
                count++;
            }
            else{
                count = 0;
            }
            len_count = max(len_count, count);
        }

        cout<<len_count<<endl;

    }

    return 0;
}