//https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem

#include<bits/stdc++.h>
using namespace std;

int minimumAbsoluteDifference(vector<int> arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
 
    int diff = INT_MAX;
 
    for (int i = 0; i < n - 1; i++)
        if (arr[i + 1] - arr[i] < diff)
            diff = arr[i + 1] - arr[i];
 
    return diff;
}

int main(){
    int n; cin>>n;
    vector<int> arr[n];
    
    for(int i=0; i<n; i++){
       push_back(arr[i]);
    }
    
    cout<<minimumAbsoluteDifference(arr);
 
}
