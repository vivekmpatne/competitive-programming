// pre comp tech
#include<bits/stdc++.h>
using namespace std;
// pre comp tech
bool check(long long x){
    long long count_dig = 0;
    long long count_zero = 0;
    while(x){
        if(x%10 == 0){
            count_zero++;
        }
        count_dig++;
        x /= 10;
    }
    return count_zero == count_dig - 1;
}

int main(){
    
    vector<long long> round_num;
    for(long long i=0; i<= 999999; i++){
        if(check(i)==true){
            round_num.push_back(i);
        }
    }
    long long t; cin>>t;
    while(t--){
     long long n; cin>>n;
    long long ans = 0;
    for(int i=0; i<round_num.size(); i++){
         if(round_num[i] <= n){
            ans++;
         }
         else{
            break;
         }
    }   
    cout<<ans<<endl;
    }
    return 0;
}