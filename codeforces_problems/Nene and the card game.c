// problem link
// https://codeforces.com/contest/1956/problem/B


#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unordered_set<int> us;
        int k;
        for(int i = 0;i < n;i++){
            cin >> k;
            us.insert(k);
        }

        int count = n - us.size();


        cout << count << endl;

    }
}
