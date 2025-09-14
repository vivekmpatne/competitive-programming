#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    
    while(t--){
        int n; cin>>n;
        long long arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        map<long long, long long> frequency_map;
        for(int i=0; i<n; i++){
            frequency_map[arr[i]]++;
        }
        if(frequency_map.size() >= 3) cout<<"No"<<endl;
        else{
            long long freq_1 = frequency_map.begin()->second;
            long long freq_2 = frequency_map.rbegin()->second;
            if(freq_1 == freq_2) cout<<"Yes"<<endl;
            else if(n%2 == 1 && abs(freq_1 - freq_2) == 1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        
    }

    return 0;
}