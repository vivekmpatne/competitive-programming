#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t; cin>>t;
    while(t--){

        long long n,a,b;
        cin>>n>>a>>b;

        if(a+b+2 <= n || (a==b && a==n)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}