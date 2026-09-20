## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Use two pointers, `left` and `right`, to represent the current search range.
Calculate the middle index and compare the middle element with the target, reducing the search range by half each time.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The solution was tested locally with two test cases before submitting to LeetCode.
The LeetCode submission was accepted with all test cases passed.