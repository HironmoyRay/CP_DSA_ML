#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c, ans;
        cin>>a>>b>>c;
        ans = max({a+b, b+c, c+a});
        cout<<ans<<endl;

    }
    
    return 0;
}