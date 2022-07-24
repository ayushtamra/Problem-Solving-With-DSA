class Solution {
    public:
        int maxArea(vector<int>& height)
        {
            int maxVol = 0;
            int n = height.size();
            int p1 = 0, p2 = n-1;
            
            for(int i=0;p1<p2;i++)
            {
                if(maxVol < min(height[p1], height[p2])*(p2-p1)) {
                    maxVol = min(height[p1], height[p2])*(p2-p1);
                }
                
                if(height[p1]<height[p2])
                {
                    p1++;
                }
                else
                    if(height[p1]>height[p2])
                    {
                        p2--;
                    }
                else
                {
                    p1++; p2--;
                }
            }
            
            return maxVol;
        }
};