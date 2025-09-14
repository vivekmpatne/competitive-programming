#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;

    vector<long long> arr;
    for(int i =0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }

    long long min_oprs = INT_MAX;
    
    for(int i=0; i<n; i++){
        min_oprs = min(min_oprs, abs(arr[i]));
    }

    cout<<min_oprs<<endl;

    return 0;
}