//https://www.hackerrank.com/challenges/save-the-prisoner/problem?isFullScreen=true

int saveThePrisoner(int n, int m, int s) {
    int remaining = m%n;
    if((remaining + s-1)%n==0)
       return n;
    return ((remaining+s-1)%n);
}
