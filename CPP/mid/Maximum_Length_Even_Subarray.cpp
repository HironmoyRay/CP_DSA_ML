#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if((n/2)%2==0 && n%2==1){
            cout<<n-1<<endl;
        }else if((n/2)%2==1 && n%2==0){
            cout<<n-1<<endl;
        }else {
            cout<<n<<endl;
        }
    }
    
    return 0;
}