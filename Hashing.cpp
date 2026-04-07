#include <bits/stdc++.h>
using namespace std;
// Hashing = pre storing and fetching it later
// inside main the maximun size od array you can declare is 10^6
// and globally you can declare the array of maximum size 10^7

// hashing is divided into 3 mathod
// 1.division method
// 2.folding method
// 3.mid square method

int main()
{

    // number hshing
    //  int n;
    //  cin>>n;
    //  int a[n];
    //  for(int i=0;i<n;i++){
    //      cin>>a[i];
    //  }

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

    // character hashing
    //  string s;
    //  cin>>s;

    // int hashh[256]={0};
    // for(int i=0;i<s.size();i++){
    //     hashh[s[i]]++;
    // }

    // int q;
    // cin>>q;
    // while(q--){
    //     char c;
    //     cin>>c;
    //     cout<<hashh[c]<<" ";
    // }

    // the time complexity of map is 0(logN) in all the three cases
    //  the time complexity of unordered map is 0(1) in best and average case and 0(N) in the worst case.
    // here N is the no. of element in the map data structure
    int n;
    cin >> n;
    int a[n];
    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        map[a[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        cout << map[number] << " ";
    }
}