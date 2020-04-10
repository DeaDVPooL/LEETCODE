bool cmp(const int& a,const int& b)
{
    return a>b;
}
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        return is_sorted(A.begin(),A.end())||is_sorted(A.begin(),A.end(),cmp);
    }
};
