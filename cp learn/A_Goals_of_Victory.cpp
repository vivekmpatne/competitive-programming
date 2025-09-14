#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long> arr;
        for(int i=0; i<n-1; i++){
            int a; cin>>a;
            arr.push_back(a);
        }
        long long sum = 0;
        for(int i=0; i<n-1; i++){
            sum += arr[i];
        }

        cout<< -1 * sum <<endl;
    }

    return 0;
}