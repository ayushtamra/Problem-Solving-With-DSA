class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        long long int minAvg = INT_MAX;
        int n = nums.size();
        int minIndex = 0;
        
        long long int Tsum = 0;
        
        for(int i=0;i<n;i++)
        {
            Tsum += nums[i];
        }
        
        for(int i=0;i<n;i++)
        {
            long long int s1 = 0, s2 = 0;
            for(int j=0;j<=i;j++)
            {
                s1 += nums[j];
            }
            
            s2 = Tsum - s1;
            
            s1 = s1/(i+1);
            
            
            if(n-i-1 != 0)
                s2 = s2/(n-i-1);
            else
                s2 = 0;
            
                    
            if(abs(s1-s2) < minAvg)
            {
                minAvg = abs(s1-s2);
                minIndex = i;
            }
        }
        
        return minIndex;
    }
};
