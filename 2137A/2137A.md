# A. Collatz Conjecture

Difficulty: 800  
Tags: math, brute force, simulation  
Link: https://codeforces.com/contest/2137/problem/A  

---

## 📝 Problem Statement

You are studying the famous Collatz Conjecture.  
Starting from an integer x, you apply the following procedure k times:

- If x is even → replace x with x / 2  
- If x is odd  → replace x with 3 * x + 1  

After all k operations, you only know the final value.  
Your task is to determine any original value of x that leads to this final value after exactly k steps.

It is guaranteed that at least one valid initial value always exists.

---

## 📥 Input

- The first line contains an integer t — the number of test cases.  
- Each test case contains two integers:  
  - k — number of steps applied  
  - x — the resulting value after k steps  

Constraints:  
1 ≤ t ≤ 400  
1 ≤ k ≤ 20  
1 ≤ x ≤ 20  

---

## 📤 Output

For each test case, print any integer that can become x after exactly k Collatz operations.

---

## 🔍 Example (From Codeforces Judge)
```
Test Result:  
Test: #1, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK

Input
3
1 4
1 5
5 4

Output
1
10
21

Answer
1
10
21

Checker Log
ok 3 token(s): yes count is 3, no count is 0
```
---

## 💡 Notes

- Since x ≤ 20 and k ≤ 20, the answer always exists within a small range.  
- You may brute-force or reverse the Collatz steps to find any valid starting number.  
