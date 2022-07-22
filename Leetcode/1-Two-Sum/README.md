## 1. Two Sum

<img src="https://img.shields.io/badge/Leetcode-Easy-green" alt="GitHub badge" />

Question link: https://leetcode.com/problems/two-sum/


1. [Approach-1(Brute-Force)](Approach-1.cpp)

In this we have 2 loops, one internal and one external. For each index i in vector, we traverse the vector and find a number such that

```nums[i] + nums[j] == target```

Time complexity: O(N^2)


2. [Approach-2(Using hashmaps)](Approach-2.cpp)

For this approach, we create a hashmap "seen" with key as vector elements and value as their positions in the vector. 
We run a for loop to traverse the vector nums. 
If `target - nums[i]` is present in the hashmap that means we got the pair which sums up to target and we return it. For detecting if the element is present in the hashmap we used `count()` which if greater than 0, we return the indices of the elements.

If the element is not found we insert the next element to the hashmap.

Dry run:
[2, 7, 11, 15]
9

i=0
b = 2, a = 7
7 not found
seen: [2]

When i=1
b = 7, a = 2
2 is found at i = 0, so return seen[a] and i, ie, {0,1}
seen: [2]

Time complexity: O(N)