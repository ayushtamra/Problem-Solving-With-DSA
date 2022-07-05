class Solution {
public:
    int rightOcc(vector<int>& nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n - 1, mid, ans = -1;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                //   This causes an error because it goes out of bounds and it is unacceptable in vectors

                // if (arr[mid + 1] != key)             
                //     return mid;
                // else
                //     low = mid + 1;
                
                ans = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
        }
        return ans;
    }
    int leftOcc(vector<int>& nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n-1, mid, ans = -1;
        while(low<=high)
        {
            mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                //  This causes an error because it goes out of bounds and it is unacceptable in vectors

                // if (nums.length() > 1 && nums[mid - 1] != target)
                //     return mid;
                // else
                //     high = mid - 1;
                
                ans = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> occ;
        occ.push_back(leftOcc(nums, target));
        occ.push_back(rightOcc(nums, target));
        
        return occ;
    }
};