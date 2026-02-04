# Lock and Key

## Time Limit
1 second

## Memory Limit
256 MB

There are `2n` positions in a row containing `n` locks and `n` keys. Each key corresponds to exactly one lock.

An array `row` represents the arrangement, where `row[i]` is the ID of the object at position `i`.

Lock–key pairs are numbered as follows:

(0,1), (2,3), (4,5), ..., (2n-2,2n-1)



Each pair represents:
(key_k , lock_k)



A lock opens only when it is placed adjacent to its corresponding key.

---

## Input

First line:
2n


Second line:
row[0] row[1] ... row[2n-1]


Constraints:
2 ≤ n ≤ 30


---

## Output

Print the minimum number of swaps needed so that all locks are adjacent to their corresponding keys.

A swap consists of selecting two objects and exchanging their positions.

---

## Example 1

Input:
4
0 2 1 3


Output:
1


---

## Example 2

Input:
4
1 0 2 3


Output:
0


---

## Example 3

Input:
10
3 0 2 1 7 4 8 5 9 6


Output:
3