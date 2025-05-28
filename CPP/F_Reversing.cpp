<<<<<<< HEAD
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0, j=(n-1); i < n/2, j>=0; i++,j--)
//     {
//         if(i==j){
//             break;
//         }
//         swap(arr[i], arr[j]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
    
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[1000];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

   
    for (int i = N - 1; i >= 0; --i) {
        cout << A[i];
        if (i > 0) cout << " "; 
    }
    cout << endl;

    return 0;
}
=======
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[3];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}
>>>>>>> a92a9fc1f9891b739619ea798ec2af0b3ed9f0f5
