// Solution with O(N) time complexity

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int f = 0, l = -1;
        int sum = 0;
        while(l<n)
        {
            if(sum < s)
            {
                l++;
                sum += arr[l];
            }
            else
            if(sum > s)
            {
                sum = sum - (arr[l]+arr[f]);
                f++;
                l--;
            }
            else
            if(sum == s)
            {
               break;
            }
        }
        
        if(l>=n || f>l)
        {
            return {-1};
        }
        else
        return {f+1, l+1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends