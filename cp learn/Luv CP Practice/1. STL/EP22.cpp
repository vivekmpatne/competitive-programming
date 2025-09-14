// 3 vector of vector , row and col both dynamic.
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
     cout<<"size: "<<v.size()<<endl;
     for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
}

int main(){
    int N; cin>>N;
    vector< vector<int > > v; // v[0] is a vector
    for(int i=0; i<N; i++){
        int n; cin>>n;
        vector<int> temp; // temp vec for storing. row ku input liya. 
                          //ab is row ku bada walla vector mai dalna hai
        for(int j=0; j<n; j++){
            int x; cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp); // temp ek single vector ka int hai. ab us temp ku vector ka vector mai store kar raha hai
        // number of rows also dynamic
    }
    cout<<"=======================\n";
    for(int i=0; i<v.size(); i++){
        printVec(v[i]);
    }
    return 0;
}

































// 2. Array of vector
// #include<bits/stdc++.h>
// using namespace std;

// void printVec(vector<int> &v){
//      cout<<"size: "<<v.size()<<endl;
//      for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//      }
//      cout<<endl;
// }

// int main(){
//     int N; cin>>N;
//     vector<int> v[N]; // N size ka vector created
//     for(int i=0; i<N; i++){
//         int n; cin>>n;
//         for(int j=0; j<n; j++){
//             int x; cin>>x;
//             v[i].push_back(x);
//         }
//     }
//     cout<<"=======================\n";
//     for(int i=0; i<N; i++){
//         printVec(v[i]);
//     }
//     return 0;
// }

// 1. vector of pair 
// #include<bits/stdc++.h>
// using namespace std;

// //1. vector of pair
// void printVec(vector<pair<int,int>> &v){
//       cout<<"size: "<<v.size() <<endl;
//       for(int i=0; i<v.size(); ++i){
//         //v[i] = ek element of vector, vo ele kya hai ek pair hai
//         // pair ka 1st and 2nd ele lo by .first and .second
//         cout<<v[i].first<<" "<<v[i].second<<endl; 

//       }
//       cout<<endl;
// }

// int main(){
// //   vector< pair<int,int> > v = {{1,2}, {3,4}, {5,6}};
//    vector< pair<int,int> > v;
//    int n; cin>>n;
//    // now taking input 
//     for(int i=0; i<n; ++i){
//        int x,y; cin>>x>>y;
//         v.push_back({x,y}); // this is easy.  or
//        /// v.push_back(make_pair(x,y));
//     }

//    printVec(v);

//     return 0;
// }