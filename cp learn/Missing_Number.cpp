#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin >> n;

    vector<long long> arr;
    for(int i=0; i<n-1; i++){
        long long a;
        cin>>a;
        arr.push_back(a);
    }

    long long sum1 = ( n*(n+1) ) / 2;
    long long sum2 = 0;

    for(int num : arr){
        sum2 += num;
    }

    long long misNUm = sum1 - sum2;

    cout<<misNUm;
     

    return 0;
}