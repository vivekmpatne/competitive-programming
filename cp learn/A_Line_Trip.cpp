#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int t; 
    cin>>t;
    while(t--){
      long long n, x;
      cin>>n>>x;

      vector<long long> pointer_arr;
      pointer_arr.push_back(0);
      for(int i=0; i<n; i++){
        long long point;
        cin>>point;
        pointer_arr.push_back(point);

      }

      pointer_arr.push_back(x);

      n = pointer_arr.size();

      long long max_dis_btw_points = 0;
      for(int i=1; i<n; i++){ 
        if(i == n-1){
            max_dis_btw_points = max(max_dis_btw_points, 2*(pointer_arr[i]-pointer_arr[i-1]));    
        }
        else{
            max_dis_btw_points = max(max_dis_btw_points, pointer_arr[i]-pointer_arr[i-1]);
        }
      }
        cout<<max_dis_btw_points<<endl;
     }
    return 0;
}