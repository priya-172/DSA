class Solution {
public:
    void permute(int index,int n,vector<int>&ans,vector<int>&nums,vector<vector<int>>&res){
        if(ans.size()>n) return;
         if(ans.size()==n){
           res.push_back(ans);
             return;
         }
        for(int i=index;i<n;++i){
          if (i != index && nums[i] == nums[index]) continue;
            ans.push_back(nums[i]);
             permute(index,n,ans,nums,res);
            ans.pop_back();
        }
    } 
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>res;
        int n=nums.size();
        
        permute(0,n,ans,nums,res);
     
        return res;
    }
};
