class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> result;
        for(int h = 0; h < 12; h++) {
            for(int m = 0; m < 60; m++) {
                bitset<10> b(h << 6 | m);
                if(b.count() == num) {
                    string temp = to_string(h) + ":";
                    if(m < 10)  temp += "0";
                    temp += to_string(m);
                    result.push_back(temp);
                }
            }
        }
        return result;
    }
};
