// 24 / 60 test cases passed. 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = 0;
        int n = height.size();
        int p1 = 0, p2 = n-1, val = 0;
        for(int i=0;i<n/2;i++)
        {
            val = min(height[p1],height[p2])*(p2-p1);
            
            if(maxVol < val)
            {
                maxVol = val;
            }
            
            p1 = height[p1]<height[p1+1]?(p1+1):p1;
            p2 = height[p2]<height[p2-1]?(p2-1):p2;
        }
        
        return maxVol;
    }
};