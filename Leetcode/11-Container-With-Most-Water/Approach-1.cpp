// Brute Force solution- TLE on leetcode

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = 0;
        int n = height.size();
        int p1 = 0, p2 = n-1, val = 0;
        for(int i=0;i<n;i++)
        {
            for(p2=n-1;p2>=0;p2--)
            {
                val = min(height[p1],height[p2])*(p2-p1);
                if(maxVol < val)
                {
                    maxVol = val;
                }
            }
            p1++;
        }
        
        return maxVol;
    }
};