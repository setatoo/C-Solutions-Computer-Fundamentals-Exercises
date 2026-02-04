# Erfan's Mysterious Number

## Time Limit
1 second

## Memory Limit
256 MB

Erfan is solving a puzzle about numbers and numeral bases.

You must find the **smallest decimal number** within range `[L,R]` satisfying:

1. When written in base `b`:
   - it has exactly `n` digits
   - it is a palindrome
   - sum of digits equals `s`
2. It lies within `[L,R]`
3. No leading zeros

If no such number exists print:
-1


---

## Input
Single line:
n b s L R


Constraints:
1 ≤ n ≤ 10
2 ≤ b ≤ 16
0 ≤ s ≤ 160
0 ≤ L,R ≤ 10^9

---

## Output
Smallest valid decimal number or -1.

---

## Example

Input:
3 10 6 100 300


Output:
141