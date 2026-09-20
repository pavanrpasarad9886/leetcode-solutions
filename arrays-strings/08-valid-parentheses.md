## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

Use a stack to store opening brackets.
For every closing bracket, check whether it matches the most recent opening bracket. The string is valid only when all brackets are matched correctly and the stack is empty at the end.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The solution was tested locally with two test cases before submitting to LeetCode.
The LeetCode submission was accepted with all test cases passed.