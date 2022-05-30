## 2181. Merge Nodes in Between Zeros

<img src="https://img.shields.io/badge/Leetcode-Medium-orange" alt="GitHub badge" />

Question link: https://leetcode.com/problems/merge-nodes-in-between-zeros/

There are basically two approaches for the question

[Approach-1(More space):](Approach1.cpp)

In this approach a new linked list is created storing the result.

```
Time complexity: O(N)
Space complexity: O(N)
```

[Approach-2(Space saving iterative approach):](Approach2-Iterative.cpp)

In this approach, instead of creating an another linked list or nodes, we use the nodes whose value are 0, to store the sum between 0's. The sum could be stored at the 

```
Time complexity: O(N)
Space complexity: O(1)
```

[Approach-3(Space saving recursive approach):](Approach3-Recursive.cpp)

Same as approach-2, the only difference is we use recursion in this!

```
Time complexity: O(N)
Space complexity: O(1)
```