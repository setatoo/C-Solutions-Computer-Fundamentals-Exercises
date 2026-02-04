# Mehdi's Puzzle

## Time Limit
1 second

## Memory Limit
256 MB

Mehdi gives Atousa two natural numbers `k` and `n`.

She must compute:

A = (k+1)(k+2)...(k+n) / (1×2×...×n)

It is guaranteed that the numerator is divisible by `n!`.

Constraints:
1 ≤ k,n ≤ 1000


---

## Input
Single line:
k n


---

## Output
Print:
A


---

## Example 1

Input:
57 3



Output:
34220


Explanation:
58×59×60 = 205320
1×2×3 = 6
205320 / 6 = 34220


---

## Example 2
Input:
3 56

Output:
32509


---

## Example 3
Input:
40 1

Output:
41


---

## Example 4
Input:
26 7

Output:
4272048


---

## Example 5
Input:
8 23

Output:
7888725