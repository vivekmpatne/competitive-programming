#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        int sou_x, sou_y, des_x, des_y;
        cin>>sou_x>>sou_y>>des_x>>des_y;
        
        if(des_y < sou_y){
            cout<<"-1"<<endl;
            continue;
        }
        int moves = des_y - sou_y;
        sou_x += moves;
        if(sou_x < des_x){
            cout<<"-1"<<endl;
            continue;
        }
        moves += (sou_x - des_x);
        cout<<moves<<endl;
    }
    return 0;
}