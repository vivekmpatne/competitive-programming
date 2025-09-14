#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
      int n;
      string s;
      cin>>n>>s;
        
      bool cont_3_emt_cells = false;
      int total_emt_cells = 0;

      for(int i=0; i<n; i++){
         if(s[i] == '.' && i+1 < n && s[i+1] == '.' && i+2 < n && s[i+2] == '.'){
            cont_3_emt_cells = true;
            break;
         }
         if(s[i] == '.'){
            total_emt_cells++;
         }
      }
      
      if(cont_3_emt_cells)
        cout<<2<<endl;
      else 
         cout<<total_emt_cells<<endl;
    }
    
    return 0;
}
