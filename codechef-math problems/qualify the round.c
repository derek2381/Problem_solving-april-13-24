// problem descrption link
//https://www.codechef.com/problems/QUALIFY

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b,x;
	    cin >> x >> a >> b;

	    if(x <= (a*1 + b*2)){
	        cout << "Qualify\n";
	    }else{
	        cout << "NotQualify\n";
	    }
	}
	return 0;
}
