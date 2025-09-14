// iterator point to pairs
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,4,5,6,7};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector< pair<int,int> > v_pair = {{1,2}, {2,3}, {4,5}, {7,8}};
    vector< pair<int,int>> :: iterator it;  
    for(it = v_pair.begin(); it != v_pair.end(); ++it){
        cout<< (*it).first<<" "<< (*it).second<<endl;
    }
    // OR
    cout<<"========================\n";
    for(it = v_pair.begin(); it != v_pair.end(); ++it){
        cout<< (it->first)<<" "<< (it->second)<<endl;
    } // (*it).first <==> (it->first)
    return 0;
}




// iterator code
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> v = {2,3,4,5,6,7};
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     vector<int>::iterator it = v.begin(); // init
//     //cout<<(*(it+1))<<endl; // it + [idx]
//     //access the all elem in vector by it.
//     for(it = v.begin(); it != v.end(); ++it){
//         cout<< (*it)<<endl;
//     }
//     return 0;
// }