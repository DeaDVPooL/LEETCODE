class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        	vector<vector<int> > res(M.size());
			for(int i=0;i<M.size();++i)res[i].resize(M[0].size());
        	int left=0,right=M[0].size()-1,top=0,bottom=M.size()-1;
        	for(int i=0;i<M.size();++i){
        		for(int j=0;j<M[0].size();++j){
        			int num=0,tmp=0;
        			if(i-1>=top){// 上 
        				if(j-1>=left){
        					tmp+=M[i-1][j-1];
        					++num;
						}
						tmp+=M[i-1][j];
						++num;
						if(j+1<=right){
							tmp+=M[i-1][j+1];
							++num;
						}
					}
						if(j-1>=left){//中 
        					tmp+=M[i][j-1];
        					++num;
						}
						tmp+=M[i][j];
						++num;
						if(j+1<=right){
							tmp+=M[i][j+1];
							++num;
						}
					if(i+1<=bottom){// 下 
        				if(j-1>=left){
        					tmp+=M[i+1][j-1];
        					++num;
						}
						tmp+=M[i+1][j];
						++num;
						if(j+1<=right){
							tmp+=M[i+1][j+1];
							++num;
						}
					}
					res[i][j]=tmp/num;
				} 
			}
			return res;
    }
};
