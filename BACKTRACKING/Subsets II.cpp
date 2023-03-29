class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          //vector<vector<int>>all_subset;
        sort(nums.begin(),nums.end());
         set<vector<int>> s;
        vector<vector<int>>ans;
        int length=nums.size();
        int n= 1<<length;
        for(int mask=0;mask<n;++mask){
            vector<int>subset;
            for(int i=0;i<length;++i){
                if((mask & (1<<i))!=0){
                    subset.push_back(nums[i]);
                }
            }
            s.insert(subset);
            subset.clear();
        }
    
        for(auto i:s){
          ans.push_back(i)  ;
        }
    return ans;
    }
};
