## 2256. Minimum Average Difference

There are basically two approaches for the question

[Approach-1(Brute Force):](Approach1-Brute.cpp)

This is the first approach which traverses the vector and calculates sum of i+1 elements with one loop and then substracting this sum with the total sum(sum of all elements in the vector)

`sum2 = TotalSum - sum1`

```
        for(int i=0;i<n;i++)
        {
            long long int s1 = 0, s2 = 0;
            for(int j=0;j<=i;j++)
            {
                s1 += nums[j];
            }

            for(int j=0;j<=i;j++)
            {
                s1 += nums[j];
            }
```


[Approach-2(Optimised):](Approach2-Optimised.cpp) - Using a sum array

This is the second approach in which the vector is traversed to calculate the sum array which can be given by

`sum[i+1] += sum[i] + nums[i];`