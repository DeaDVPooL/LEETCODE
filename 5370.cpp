class UndergroundSystem {
public:
    class Passager
    {
        public:
        int id,t;
        string stationName;
        Passager(int i,string s,int a):id(i),stationName(s),t(a){}
        Passager(){}
    };
    unordered_map<int,Passager> in;
    unordered_map<string,double> sum;
    unordered_map<string,int> cnt;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        in[id] = Passager(id,stationName,t);
    }
    
    void checkOut(int id, string stationName, int t) {
        sum[in[id].stationName+stationName]+=t-in[id].t;
        cnt[in[id].stationName+stationName]++;
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        if(cnt[startStation+endStation]==0)  return 0;
        return sum[startStation+endStation]/cnt[startStation+endStation];
        
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
