#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t; cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr;
        for(int i=0; i<n; i++){
            long long a; cin>>a;
            arr.push_back(a);
        }
        long long positive_count = 0;
        long long negative_count = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == 1) positive_count++;
            else negative_count++;
        }
        long long oper = 0;
        while(positive_count < negative_count || negative_count%2 == 1){
            // pos < neg || odd neg 
            positive_count++;
            negative_count--;
            oper++;
        }
        cout<<oper<<endl;
    }
    return 0;
}