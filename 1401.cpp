class Solution {
public:
       bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2) 
    {
        double x0 = (x1 + x2) / 2.0;
        double y0 = (y1 + y2) / 2.0;

        vector<double> p = { abs(x_center - x0) , abs(y_center - y0) };
        vector<double> q = { x2 - x0, y2 - y0 };
        
        vector<double> u = { max(p[0] - q[0], 0.0), max(p[1] - q[1], 0.0) };

        return sqrt(u[0] * u[0] + u[1] * u[1]) <= radius;   
    }
};
