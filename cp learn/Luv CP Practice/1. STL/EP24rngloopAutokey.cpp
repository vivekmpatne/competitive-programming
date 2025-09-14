#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v= {2,3,4,5,6,7};
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<"\n==========================="<<endl;
    vector<int> :: iterator it;
    for(it = v.begin(); it != v.end(); ++it){
        cout<<(*it)<<" ";
    } 
    cout<<"\n==========================="<<endl;
    for(int &value : v){  // range based. small syn
        value++;
        //cout<<value<<" ";
    }
    // value = copy of v. not actual. 
    // reference = &
    for(int value : v){
        cout<<value<<" "; // ++ value wil be now print because of &
    }
    cout<<endl;

    cout<<" \nauto keyword::::::::::: \n";

    //vector< pair<int,int>> :: iterator it  == auto keyword;  
    for( auto it = v.begin(); it != v.end(); ++it){
        cout<< (*it)<<" ";
    }
    cout<<"\n==========================\n";
    vector< pair<int,int> > v_pair = {{1,2}, {2,3}, {4,5}, {7,8}};
    for(auto &value : v_pair){
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}