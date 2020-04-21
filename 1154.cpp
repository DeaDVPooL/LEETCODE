class Solution {
public:
    int days[2][13] = {{0, 31,28, 31, 30, 31, 30, 31,31,30,31, 30, 31},
                        {0, 31,29, 31, 30, 31, 30, 31,31,30,31, 30, 31}};

    bool leap(int y)
    {
        return (!(y % 4) && (y % 100)) || !(y % 400);
    }

    int dayOfYear(string date) 
    {
        int y, m, d, cnt = 1, dc = 1, mc = 1;
        sscanf(date.c_str(), "%d-%d-%d", &y, &m, &d);

        /*从1月1号算起*/
        while(dc < d || mc < m){
            dc++;
            if(dc == days[leap(y)][mc] + 1){  //满当月天数
                mc++;
                dc = 1;          //日期变为下一月的1号
            }
            cnt++;
        }
        return cnt;
    }
};
