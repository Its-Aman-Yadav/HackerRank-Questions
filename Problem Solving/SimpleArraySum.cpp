//https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;


int arraySum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}




int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<arraySum(arr, n);

return 0;
}
