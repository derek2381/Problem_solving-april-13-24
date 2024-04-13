// problem link
// https://codeforces.com/contest/1956/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int q, n;
        cin >> q >> n;

        vector<int> arr1(q), arr2(n), res;

        for(int i = 0; i <q;i++){

            cin >> arr1[i];
        }
        int min = arr1[0];

        for(int i = 0;i < n;i++){

            cin >> arr2[i];
            if(arr2[i] >= min){
                res.push_back(min-1);
            }else{
                res.push_back(arr2[i]);
            }
        }

        for(int i =0; i < n;i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
}
