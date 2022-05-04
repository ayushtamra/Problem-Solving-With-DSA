## 2256. Minimum Average Difference

<img src="https://img.shields.io/badge/Leetcode-Medium-orange" alt="GitHub badge" />

Question link: https://leetcode.com/problems/minimum-average-difference/

There are basically two approaches for the question

[Approach-1(Brute Force):](Approach1-Brute.cpp)

This is the first approach which traverses the vector and calculates sum1 ,ie, sum of i+1 elements with one loop and then for getting the sum of n-i-1 elements(remaining elements), substracts sum1 with TotalSum

`sum2 = TotalSum - sum1`

Code used in Approach1:
```
        for(int i=0;i<n;i++)
        {
            long long int s1 = 0, s2 = 0;
            for(int j=0;j<=i;j++)
            {
                s1 += nums[j];
            }
            
            s2 = Tsum - s1;
            
```
Where,
>Tsum is the sum of all the elements in the array.

- After this the average is calculated (avg1 and avg2)
- The absolute(using abs()) of the two averages for each index is compared and index with minimum average is returned.

**Time complexity: O(N^2)**



[Approach-2(Optimised):](Approach2-Optimised.cpp) - Using a sum array

This is the second approach in which the vector is traversed to calculate the sum array which can be given by

`sum[i+1] += sum[i] + nums[i];`

For getting sum of i+1 elements, which is required for calculating avg1, we will be using `sum[i+1]`.

For getting sum of n-i-1 elements(remaining elements), which is required for calculating avg2, we will be using `sum[n] - sum[i+1]`


**Time complexity: O(N)**