//https://www.hackerrank.com/challenges/chocolate-feast/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int chocolateFeast(int n, int c, int m) {
    int chocolates = n/c;
    int wrappers = chocolates;
    while(wrappers >= m){
      chocolates += wrappers/m;
      wrappers = wrappers/m + wrappers%m;
    }
    return chocolates;
}


int main(){
    int n,c,m;
    cin>>n>>c>>m;
    cout<<chocolatefeast(n, c, m);

}
