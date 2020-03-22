class Solution {
public:
    unsigned long long hash[100005],base[100005];
    const unsigned long long b=13131;
    string longestPrefix(string s) {
    base[0]=1;
        for(int i=0;i<s.length();i++){
            base[i+1]=base[i]*b;
            hash[i+1] = hash[i]*b+s[i]-'a'+1;
            //cout<<hash[i]<<endl;
        }
        for(int i=s.length()-1;i>=0;i--){
            //printf("%llu %llu\n",hash[i],hash[s.length()-1]-hash[s.length()-i-1]*base[i]);
            if(hash[i]==hash[s.length()]-hash[s.length()-i]*base[i]){
                return s.substr(0,i);
            }
        }
        return "";
    }
};
