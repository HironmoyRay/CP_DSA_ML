#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    if(abs(w1-w2)>=(x1*m) && abs(w1-w2)<=(x2*m)){
	        cout<<1<<endl;
	    } else {
	        cout<<0<<endl;
	    }
	}

}
