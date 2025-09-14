#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        char arr[10][10];
        for(int i=0; i<10; i++){
            string s; cin>>s;
             for(int j=0; j<10; j++){
                arr[i][j] = s[j];
            }
        }

        long long total_sc = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if( arr[i][j] == 'X'){
                   long long point = min({i,j,9-i,9-j});
                  total_sc += point + 1;
                }
            }
        }

        cout<<total_sc<<endl;

    }

    return 0;
}