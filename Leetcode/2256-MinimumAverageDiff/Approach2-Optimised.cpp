class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n = nums.size();
        vector<long long int> sum(n+1, 0);
        
        
        for(int i=0;i<n;i++)
        {
            sum[i+1] += sum[i] + nums[i];
        }
        
        int minAvg = INT_MAX;
        int minIndex;
        
        for(int i=0;i<n;i++)
        {
            
            int avg1 = sum[i+1]/(i+1);

            int avg2;

            if(n-i-1 == 0)
                avg2 = 0;
            else
                avg2 = (sum[n]-sum[i+1])/(n-i-1);
            
            
            if(abs(avg1-avg2) < minAvg)
            {
                minAvg = abs(avg1-avg2);
                minIndex = i;
            }
        }
        
        return minIndex;
        
    }
};