// Optimal solution using hashmap
// Time complexity: O(N)

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> copy = nums;
        sort(copy.begin(), copy.end());
        
        unordered_map<int, int> umap;
        int n = nums.size();
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            if(umap.count(copy[i]) == 0)
            umap[copy[i]] = i;
        }
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(umap[nums[i]]);
        }
        
        return ans;
    }
};