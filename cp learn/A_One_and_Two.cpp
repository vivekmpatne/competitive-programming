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

        long long total_num_of_tows = 0;
        long long current_num_of_tows = 0;

        for(int i=0; i<n; i++){
           if(arr[i] == 2){
            total_num_of_tows++;
           }
        }

        long long ans = -1;
        for(int i=0; i<n; i++){
            if(arr[i]==2){
                current_num_of_tows++;
            }
            if((current_num_of_tows) == (total_num_of_tows - current_num_of_tows)){
                ans = i + 1; //
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
} // tc and sc = O(n). optimal.. brute O(n^2)