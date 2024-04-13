// prolem link
// https://www.codechef.com/problems/CNDLOVE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n;
	    int sum = 0;

	    for(int i = 0; i< n;i++){
	        cin >> k;

	        sum += k;
	    }

	    if(sum % 2 == 1){
	        cout << "YES\n";
	    }else{
	        cout << "NO\n";
	    }
	}
	return 0;
}
