## 1. فیبوتک (Fibotech)

**Time limit:** 1 second  
**Memory limit:** 256 MB

Mr. Galbi, a graduate in industrial engineering, has a strong interest in system optimization. After becoming familiar with Fibonacci numbers (the Italian mathematician), he wants to estimate the complexity of tasks using Fibonacci numbers.

By definition, Fibonacci numbers are a sequence where each term is the sum of the two preceding ones, with the first two terms both equal to 1.

He has asked you to write a program that helps him in process optimization: find the **largest Fibonacci number ≤ input**, subtract it from the input, and repeat this process until the input is completely decomposed into Fibonacci numbers. Finally, print all these Fibonacci parts **from largest to smallest**.

### Input
- A single natural number

### Output
- Print all Fibonacci components in descending order (largest to smallest)

**Fibonacci definition:**
Fib(1) = 1, Fib(2) = 1
Fib(n) = Fib(n−1) + Fib(n−2)    for n > 2
Sequence: 1, 1, 2, 3, 5, 8, 13, 21, ...
text**Constraints:**
1 ≤ n ≤ 10,000,000
text### Sample Input 1
12
text### Sample Output 1
8
3
1
text**Explanation:**
- Step 1: largest Fib ≤ 12 is **8** → 12−8 = 4
- Step 2: largest Fib ≤ 4 is **3** → 4−3 = 1
- Step 3: largest Fib ≤ 1 is **1**

### Sample Input 2
50
text### Sample Output 2
34
13
3
text### Sample Input 3
4765854
text### Sample Output 3
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