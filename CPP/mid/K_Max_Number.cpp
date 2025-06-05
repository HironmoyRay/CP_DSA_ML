#include <bits/stdc++.h>
using namespace std;
int findMax(int a[], int n){
    if(n==1){
        return a[0];
    }
    return max(a[n-1], findMax(a, n-1));
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<findMax(a,n);

    
}