//https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true

int diagonalDifference(vector<vector<int>> arr) {
    int d1=d2=0;
    for(int i=0; i<arr.size(); i++){
       for(int j=0; j<arr.size(); j++){
           if(i==j){
             d1 += arr[i][j];
           }
       }
    }
    
    for(int i=0; i<arr.size(); i++){
       for(int j=0; j<arr.size(); j++){
           if(i+j=arr.size()-1){
             d2 += arr[i][j];
           }
       }
    }

    int ans = abs(d1-d2);
    return ans;


}
