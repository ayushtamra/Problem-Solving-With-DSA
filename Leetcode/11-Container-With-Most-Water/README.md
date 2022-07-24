## 11. Container With Most Water

<img src="https://img.shields.io/badge/Leetcode-Medium-orange" alt="GitHub badge" />

Question link: https://leetcode.com/problems/minimum-average-difference/

1. [Approach-1 - Brute Force](Approach-1.cpp)

In this approach we use 1 internal and external loop to check each element with others in the vector and calculate max amount of water

Time complexity: O(N^2)

2. [Approach-2 - Using two pointers](Approach-2.cpp)

In this approach we use 2 pointers to traverse the vector and find max amount of water.
For getting the max combination of both height and distance using 2 pointers we gave condition,
(Moved the pointer with less height)
```
while(p1 < p2)
{
    if(height[p1]<height[p2])
    {
        p1++;
    }
    else
    if(height[p1]>height[p2])
    {
        p2--;
    }
    else{
        p1++; p2--;
    }
}
```

3. [Approach-3 - Wrong solution](Wrong-Soln.cpp)

In this solution I approached it similar to the 2 pointers but rarther than moving 2 pointers comparing heights of right and left pointers, I compared heights of left and left+1 pointers, right and right+1 pointers.