class Solution {
public:
    void  backtrack(int index,int k,int n, vector<int>&output,vector<vector<int>>&res ){
       //base case
          if(n < 0 || output.size() > k) return;
        if(output.size()==k and n==0){
            res.push_back(output);
            return;
        }
        for(int i=index;i<=9;++i){
        output.push_back(i);
        backtrack(i+1,k,n-i,output,res);
        output.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>>res;
       vector<int>output;
      
       
     int index=1;
    backtrack(index,k,n,output,res);
        return res;
    }
};
