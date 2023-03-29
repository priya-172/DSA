class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>>all_subset;
        int length=nums.size();
        int n= 1<<length;
        for(int mask=0;mask<n;++mask){
            vector<int>subset;
            for(int i=0;i<length;++i){
                if((mask & (1<<i))!=0){
                    subset.push_back(nums[i]);
                }
            }
             all_subset.push_back(subset) ;
        }
      return  all_subset;
    }
};
