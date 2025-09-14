#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t; cin>>t;
    while(t--){
        long long a,c,b;
        cin>>a>>b>>c;
        if( c%2 == 1){
            if(b>a) cout<<"Second\n";
            else cout<<"First\n";
        }
        else {
            if(a>b) cout<<"First\n";
            else cout<<"Second\n";
        }
    }

    return 0;
}