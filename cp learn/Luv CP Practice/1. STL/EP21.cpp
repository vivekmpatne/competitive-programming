#include<bits/stdc++.h>
using namespace std;

int main(){
    // pair<int, string> p1;
    // pair<long long, string> p2;
    // pair<double, string> p3;

   // p1 = make_pair(2, "abcsda"); // or
    // p1 = {2, "abcsda"};

    // p2 = make_pair(22934724, "efusfh");

    // cout<<p1.first<<" "<<p1.second<<endl;

    // pair<int, string> &p3= p1; // by reference (actual)
    // //pair<int, string> p3= p1; // by value (copy)
    // p3.first = 30;
    // cout<<p1.first<<" "<<p1.second<<endl;

    pair<int, string> p;
    p = {2, "abcd"};
    pair<int, string> &p1 = p; // by reference (original) // 30
   // pair<int, string> p1 = p; // by value(copy jata hai) // 2
    p1.first = 30;
    cout<<p.first<<" "<<p.second<<endl;

    // pair of arry
    int a[] = {1,2,3};
    int b[] = {11,12,13};
    pair<int,int> p_array[3];
    p_array[0] = {1,11};
    p_array[1] = {2,12};
    p_array[2] = {3,13};
    for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0], p_array[2]);
    cout<<"swap :  "<<endl;
    for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    // pair int,str p;
    // cin>> p.first;
     // cout<< p.first;

     
    return 0;
}