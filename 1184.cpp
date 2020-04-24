class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start>destination)   swap(start,destination);
        int clockwise = 0,anticlockwise = 0;
        for(int i=start;i<destination;i++)  clockwise+=distance[i];
        for(int i=0;i<start;i++)    anticlockwise+=distance[i];
        for(int i=destination;i<distance.size();i++)    anticlockwise+=distance[i];
        return min(clockwise,anticlockwise);
    }
};
