class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i;
        for(i=0;i<bits.size()-1;)
        {
            if(bits[i]==1)  i+=2;
            else i+=1;
        }
        return i==bits.size()-1;
    }
};
