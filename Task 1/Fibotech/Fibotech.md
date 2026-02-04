# Fibotech

Mr. Golabi, a graduate in Industrial Engineering, has a strong interest in system optimization. Having recently become familiar with Fibonacci numbers (introduced by the Italian mathematician Fibonacci), he wants to estimate the complexity of task-related processes using Fibonacci numbers.

By definition, Fibonacci numbers form a sequence in which each term is equal to the sum of the two preceding terms, with the first and second terms both equal to one:

Fib(1) = 1
Fib(2) = 1
Fib(n) = Fib(n−1) + Fib(n−2)

Sequence:
1, 1, 2, 3, 5, 8, ...

He asks you to write a program to help optimize processes as follows:

At each step, find the largest Fibonacci number less than or equal to the current input value and subtract it from the input.  
Repeat this process until the input value is completely decomposed into Fibonacci components.  
Finally, print all the Fibonacci components in descending order (from largest to smallest).

---

## Input

The input consists of a single natural number `n`.

1 ≤ n ≤ 10,000,000


---

## Output

Print all Fibonacci components in descending order, one per line.

---

## Example 1

### Input
12

### Output
8
3
1

### Explanation
- Step 1: The largest Fibonacci number ≤ 12 is 8  
- Step 2: For 4 = 12 − 8, the next component is 3  
- Step 3: For 1 = 4 − 3, the remaining component is 1

---

## Example 2

### Input
50


### Output
34
13
3


---

## Example 3

### Input
4765854


### Output
3524578
832040
317811
75025
10946
4181
987
233
34
13
5
1