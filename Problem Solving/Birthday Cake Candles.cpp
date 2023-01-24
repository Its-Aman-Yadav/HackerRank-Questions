//https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;


int tallestCandles(int arr[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==max)
          count++;
    }

    return count;
}


int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<tallestCandles(arr, n);

return 0;
}
