# Special Triplets Sum

You are given two natural numbers `N` and `M`.

An ordered triplet `(a, b, c)` is called **special** if:

1. `a` is an odd natural number.
2. `b = 2^k` where `k ≥ 0`.
3. `c` is prime and `c ≤ M`.

Let:
i = a × b × c

Define `Count(i)` as the number of special triplets whose product equals `i`.

Compute:
S = Σ Count(i) for i=1..N


Output:
S mod (10^9 + 7)


---

## Input
N M

Constraints:
1 ≤ N ≤ 10^18
1 ≤ M ≤ 3.5 × 10^5

---

## Output
Single integer result.

---

## Example
Input:
6 5

Output:
6