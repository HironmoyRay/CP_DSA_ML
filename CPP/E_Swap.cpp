#include <bits/stdc++.h>
using namespace std;
void swapping(int a, int b){
    int temp ;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
}
int main(){
    int x, y;
    cin>>x>>y;
    swapping(x,y);
}