#include<bits/stdc++.h>
using namespace std;
int isOdd(int n){
    if(n%2==1){
        return 1;
    }else {
        return 0;
    }
}
int isPalindrome(int n){
    string x;
    while(n!=0){
        x+=n%2+'0';
        n=n/2;
    }
    for (int i = 0, j=x.size()-1; i < x.size(), j>=0; i++, j--)
    {
        if(x[i]!=x[j]){
            return 0;
        }
    }
    return 1;
    
}
int main(){
    int n;
    cin>>n;
    if(isOdd(n)==1 && isPalindrome(n)==1){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }

}