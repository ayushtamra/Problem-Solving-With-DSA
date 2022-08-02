// Optimal solution without hashmap
// Time complexity: O(N)

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> copy = nums;
        sort(copy.begin(), copy.end());
        
        int n = nums.size();
        
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(distance(copy.begin(), find(copy.begin(), copy.end(), nums[i])));
        }
        
        return ans;
    }
};