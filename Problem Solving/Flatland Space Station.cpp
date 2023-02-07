//https://www.hackerrank.com/challenges/flatland-space-stations/problem?isFullScreen=true

int flatlandSpaceStations(int n, vector<int> c) {
    
    int maxDistance = 0 ;
    int nearestStationIndex= 0 ;
    sort(c.begin(), c.end());
    for(int i=0;i<n;i++)
    {
        if(c.size()>nearestStationIndex+1)
        {
            if(abs(c[nearestStationIndex+1]-i) < abs(c[nearestStationIndex]-i))
            {
                nearestStationIndex++;
            }
        }
         if(abs(c[nearestStationIndex] - i) > maxDistance)
              maxDistance = abs(c[nearestStationIndex] - i); 
    }
    return maxDistance;

}
