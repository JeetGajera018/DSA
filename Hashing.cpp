#include<bits/stdc++.h>
using namespace std;
//Hashing = pre storing and fetching it later
//inside main the maximun size od array you can declare is 10^6
//and globally you can declare the array of maximum size 10^7



int main(){

    //number hshing
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }

    // int hashh[100000000]={0};
    // for(int i=0;i<n;i++){
    //     hashh[a[i]]+=1;
    // }

    // int q;
    // cin>>q;
    // while(q--){
    //     int num;
    //     cin>>num;
    //     cout<<hashh[num]<<" ";
    // }

    //character hashing
    string s;
    cin>>s;
    
    int hashh[256]={0};
    for(int i=0;i<s.size();i++){
        hashh[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hashh[c]<<" ";
    }



}