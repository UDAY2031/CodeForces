# A. Next Round(158A)

**Difficulty:** 800  
**Tags:** implementation, greedy  
**Link:** https://codeforces.com/problemset/problem/158/A  

---

## 📝 Problem Statement

A total of `n` participants took part in a contest. The participants are ranked from 1 to `n`, and their scores are given in **non-increasing order** (each score is ≥ the next one).

A participant will advance to the next round **if** both conditions are satisfied:

1. Their score is **greater than or equal to** the score of the `k`-th placed participant,  
2. Their score is **strictly positive**.

Your task is to count how many participants advance to the next round.

---

## 📥 Input

- The first line contains two integers `n` and `k` (1 ≤ k ≤ n ≤ 50).  
- The second line contains `n` integers `a1, a2, ..., an` (0 ≤ ai ≤ 100).  
- Scores are given in **non-increasing order**.

---

## 📤 Output

Output a single integer — the **number of participants** who advance to the next round.

---

## 🔍 Example (From Codeforces Judge)

```
Input
8 5
10 9 8 7 7 7 5 5

Output
6

Input
4 2
0 0 0 0

Output
0
```


### ✔ Explanation

- In the first example:  
  - The score of the 5th participant is **7**.  
  - All participants scoring **≥ 7** and **> 0** advance → **6 participants**.

- In the second example:  
  - All scores are **0**, so nobody advances.

---

## 💡 Notes

- Only **positive scores** can advance.  
- Contestants with the **same score** as the k-th participant also advance.  
- Scores are already sorted, so no sorting is required.

---
