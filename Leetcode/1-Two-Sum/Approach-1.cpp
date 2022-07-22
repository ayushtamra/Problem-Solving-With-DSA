class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            
        vector<int> ans;
        
        unordered_map<int,int> umap;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            umap[nums[i]] = i;
        }
        
        for(int i=0;i<n;i++)
        {
            int rem = target - nums[i];
            
            if(umap[rem]>0 && umap[rem] != i)
            {
                ans.push_back(i);
                ans.push_back(umap[rem]);
                
                return ans;
            }
        }
        
        return ans;
    }
};