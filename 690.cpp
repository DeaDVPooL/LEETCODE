/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int sum = 0;
        unordered_map<int,Employee*> dict;
        for(auto it : employees) dict[it->id] = it;
        queue<Employee*> q;
        q.push(dict[id]);
        while(!q.empty())
        {
            Employee* tmp = q.front();
            q.pop();
            sum+=tmp->importance;
            for(auto it : tmp->subordinates)    q.push(dict[it]);
        }
        return sum;
    }
};
