//https://www.hackerrank.com/challenges/game-of-two-stacks/problem

int twoStacks(int x, vector<int> a, vector<int> b) {
      
        int sum=0,count=0;       
        int n=a.size();
        int i=0;
        while(i<n && sum+a[i]<=x){                  //considering only first stack and calculating count
            sum+=a[i];
            i++;
        }
        
        count=i;        
        int m=b.size();                               //now adding one element of second stack at a time and subtracting the top element of first stack and calculating the count   
        int j=0;
        while(j<m && i>=0){      
            sum+=b[j];             
            j++;
            while(sum>x && i>0){
                i--;
                sum-=a[i];
            }
            if(sum<=x && i+j>count)
                count=i+j;
        }
        return count;
    } 
