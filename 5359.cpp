class Solution {
public:
    
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<int> order(n);
        for (int i = 0; i < n; ++i)
            order[i] = i;
        sort(order.begin(), order.end(), [&](int i, int j){
           return efficiency[i] > efficiency[j]; 
        });
        priority_queue<int, vector<int>, greater<>> pq;
        long long hi = 0, sum = 0;
        for (int j = 0; j < n; ++j) {
            int i = order[j];
            pq.push(speed[i]);
            sum += speed[i];
            if (pq.size() > k) {
                sum -= pq.top();
                pq.pop();
            }
            hi = max(hi, efficiency[i] * sum);
        }
        return hi % 1000000007;
    }
};
