// Link: https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        pair<int, int> pr[n+1];
        for(int i=0;i<n;i++)
        {
            pr[i].first = end[i];
            pr[i].second = start[i];
        }
        
        sort(pr, pr+n);
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<pr[i].first<<" "<<pr[i].second<<endl;
        // }
        
        int cnt = 0;
        int j = 0;
        for(int i=1;i<n;i++)
        {
            if(pr[j].first < pr[i].second)
            {
                cnt++;
                j=i;
            }
        }
        
        return cnt+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends