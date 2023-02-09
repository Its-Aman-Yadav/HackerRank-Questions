//https://www.hackerrank.com/challenges/big-sorting/problem?isFullScreen=true

bool myCmp(string s1, string s2)
{
    if (s1.size() == s2.size()) 
        return s1 < s2;
    else 
        return s1.size() < s2.size();
}
vector<string> bigSorting(vector<string> unsorted) {
    vector<string>v;
    sort(unsorted.begin(),unsorted.end(),myCmp);
    v=unsorted;
    return v;
}
