#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s; cin>>s;
        vector<int> freq_of_char(26,0);

        for(int i=0; i<n; i++){
            freq_of_char[s[i] - 'a']++;
        }

        long long odd_freq = 0;
        for(int i=0; i<26; i++){
            odd_freq += freq_of_char[i]%2; // only adds 1's. 0 adds but not effects
        }
        if(odd_freq > k+1)
             cout<<"NO"<<endl; 
        else 
            cout<<"YES"<<endl;
    }
    return 0;
}