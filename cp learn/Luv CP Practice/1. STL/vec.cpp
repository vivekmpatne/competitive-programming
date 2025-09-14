#include<bits/stdc++.h>
using namespace std;

void printVecSC(vector<string> &v){
    cout<< "SIze: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void printVec(vector<int> &v){
    cout<< "SIze: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    v.push_back(20);
    cout<<endl;
}

int main(){

    vector<string> v_s;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        v_s.push_back(s);
    }
    printVecSC(v_s);

    vector<int> v;
    v.push_back(7);
    v.push_back(6);

    vector<int> v2 = v; //O(1)
    //vector<int> &v2 = v; // ref
    v2.push_back(5);
    printVec(v);
    printVec(v);
    printVec(v2);


    return 0;
}