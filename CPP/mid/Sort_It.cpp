#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        if(i==n-1){
            cout<<arr[i]<<endl;
        }else{
            cout<<arr[i]<<" ";
        }
    }
    sort(arr, arr+n, greater<int>());
        for (int i = 0; i < n; i++)
    {
        if(i==n-1){
            cout<<arr[i]<<endl;
        }else{
            cout<<arr[i]<<" ";
        }
    }
    
}