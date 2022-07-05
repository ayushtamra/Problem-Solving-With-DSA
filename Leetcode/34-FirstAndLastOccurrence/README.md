## 34. Find First and Last Position of Element in Sorted Array

<img src="https://img.shields.io/badge/Leetcode-Medium-orange" alt="GitHub badge" />

Question link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/


Approach-1: Binary search

As mentioned in the question that we have to search the position under O(logn) time with a sorted vector, this clearly states that we have to use binary search here.
Binary search is implemented by dividing the vector by half in every loop reaching to the target element.

Now in addition to reaching to the desired element we have to find the first and last position

1. Left position:

Doing `high = mid - 1;` whenever the target element is found and storing mid on a result variable `ans`

Now the low and high pointers made by us converges towards the left position.

2. Right position:

Doing `low = mid + 1;` whenever the target element is found and storing mid on a result variable `ans`

Now the low and high pointers made by us converges towards the right position.