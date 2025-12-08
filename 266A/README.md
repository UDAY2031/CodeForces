# A. Stones on the Table

**Difficulty:** 800  
**Tags:** implementation, strings  
**Link:** https://codeforces.com/problemset/problem/266/A  

---

## 📝 Problem Statement

There are `n` stones on the table in a row.  
Each stone is painted with a color represented by a capital English letter such as `'R'`, `'G'`, or `'B'`.

You want to remove **the minimum number of stones** so that **no two adjacent stones have the same color**.

Your task is to determine how many stones must be removed.

---

## 📥 Input

- The first line contains an integer `n` (1 ≤ n ≤ 50) — the number of stones.  
- The second line contains a string of length `n`, where each character represents the color of a stone.  
  - The string consists only of `'R'`, `'G'`, `'B'`.

---

## 📤 Output

Print a single integer — the **minimum number of stones** that need to be removed.

---

## 🔍 Example (From Codeforces Judge)

```
Input
3
RRG
5
RRRRR


Output
1
4

```

### ✔ Explanation

The stones are: **R R G**

- The first two stones are both **R**, so one of them must be removed.  
- Afterwards, the sequence becomes **R G**, which has no identical adjacent stones.

Minimum stones removed = **1**

---

## 💡 Notes

- This is a simple counting problem:  
  - Traverse the string  
  - Check how many times `s[i] == s[i-1]`  
  - Each such occurrence represents **one stone to remove**  
- The string is short (length ≤ 50), so the solution is O(n).

---
