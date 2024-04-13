// problem link
// https://www.codechef.com/problems/ATTENDU

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    string str;
	    cin >> n >> str;

	    int count = 0;
	    for(char i : str){
	        if(i == '0'){
	            count++;
	        }
	    }

	    if(count > 30){
	        cout << "NO\n";
	    }else{
	        cout << "YES\n";
	    }
	}
	return 0;
}
