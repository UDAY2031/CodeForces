# A. Team(231A)

**Difficulty:** 800  
**Tags:** implementation, brute force  
**Link:** https://codeforces.com/problemset/problem/231/A  

---

## 📝 Problem Statement

Three friends — Petya, Vasya, and Tonya — participate in programming contests together.  
For each problem, they discuss the solution and decide whether they are confident enough to implement it.

You are given `n` problems.  
For each problem, you are given three integers (either `0` or `1`):

- `1` means the corresponding friend is **sure** about the solution.
- `0` means they are **not sure**.

A team solves a problem **if at least two of the three friends are sure** about the solution.

Your task is to determine how many problems the team will solve.

---

## 📥 Input

- The first line contains a single integer `n` (1 ≤ n ≤ 1000) — the number of problems.  
- Each of the next `n` lines contains three integers (`0` or `1`), representing the opinions of Petya, Vasya, and Tonya.

---

## 📤 Output

Output a single integer — the **number of problems** the team will solve.

---

## 🔍 Example (From Codeforces Judge)

```
Input
3
1 1 0
1 1 1
1 0 0

Output
2
```

### ✔ Explanation

- Problem 1: Opinions → 1, 1, 0 → **2 sure** → solved  
- Problem 2: Opinions → 1, 1, 1 → **3 sure** → solved  
- Problem 3: Opinions → 1, 0, 0 → only **1 sure** → not solved  

Total solved problems = **2**

---

## 💡 Notes

- A problem is solved only if **at least two** friends are confident.  
- Since each value is either `0` or `1`, the sum of the three values tells us how many are sure.  
  - Sum ≥ 2 → solved  
  - Sum < 2 → not solved  
- Very straightforward implementation problem.

---
