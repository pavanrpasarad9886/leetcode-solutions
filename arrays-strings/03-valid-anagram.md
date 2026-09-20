## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

Use a frequency array of size 26 to count the occurrences of each lowercase letter in the first string.
Then subtract the character frequencies of the second string. If all counts become zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution was tested locally with two test cases before submitting to LeetCode.
The LeetCode submission was accepted with all test cases passed.
