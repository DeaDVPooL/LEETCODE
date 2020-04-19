class Table
{
public:
    int id;
    unordered_map<string,int> cnt;
};
class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        set<string> food;
        set<int> TableNum;
        unordered_map<int,Table> t;
        for(int i=0;i<orders.size();i++)
        {
            int num = atoi(orders[i][1].c_str());
            if(TableNum.count(num)==0)
            {
                TableNum.insert(num);
                t[num].id = num;
            }
            food.insert(orders[i][2]);
            t[num].cnt[orders[i][2]]++;
        }
        vector<vector<string>> ans;
        vector<string> head;
        head.emplace_back("Table");
        for(auto s : food)  head.emplace_back(s);
        ans.emplace_back(head);
        for(auto table : TableNum)
        {
            vector<string> tmp;
            tmp.emplace_back(to_string(table));
            for(auto s : food)
            {
                if(t[table].cnt.count(s)!=0)    tmp.emplace_back(to_string(t[table].cnt[s]));
                else tmp.emplace_back("0");
            }
            ans.emplace_back(tmp);
        }
        return ans;
    }
};
