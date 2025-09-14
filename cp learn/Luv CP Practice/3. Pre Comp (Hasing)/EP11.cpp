#include<bits/stdc++.h>
using namespace std;

int main(){

   // cout<<(-5%47)<<endl; // -5 in C, CPP.  python and java = 42 (non-negative)
    int n; cin>>n;
    long long fact  = 1;
    int M = 47;
    for(int i=2; i<=n; i++){
       // fact = fact * i;
        fact = (fact * i) % M;
    }
    cout<<fact<<endl;

    return 0;
}