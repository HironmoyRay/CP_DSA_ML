#include <bits/stdc++.h>
using namespace std;
double avarage(double* arr, int n){
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum/n;
}

int main(){
    int n;
    cin>>n;
    double* arr = new double[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    double result = avarage(arr, n);
    cout<< fixed <<setprecision(7)<< result<<endl;
    // printf("%.7f\n", result);
    delete[] arr;
    
    return 0;
}