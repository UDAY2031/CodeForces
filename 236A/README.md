# A. Beautiful Matrix (263A)

**Difficulty:** 800  
**Tags:** implementation  
**Link:** https://codeforces.com/problemset/problem/263/A  

---

## 📝 Problem Statement

You are given a **5×5 matrix** consisting of **24 zeros** and **exactly one `1`**.  
You are allowed to perform the following moves:

1. Swap two **adjacent rows** (row `i` with row `i+1`)
2. Swap two **adjacent columns** (column `j` with column `j+1`)

A matrix is considered **beautiful** when the `1` is located in the **center cell** — that is, at position **(3, 3)** using 1-based indexing.

Your task is to calculate the **minimum number of moves** required to bring the `1` to the center.

---

## 📥 Input

The input consists of **five lines**, each containing **five integers** (0 or 1).

- Exactly **one** of these integers is `1`.
- All others are `0`.

---

## 📤 Output

Print a single integer — the **minimum number of moves** needed to make the matrix beautiful.

---

## 🔍 Example (From Codeforces Judge)

```
Input
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

Output
3

Input
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0

Output
1
```


---

## ✔ Explanation

To move the `1` to the center, you can shift it using row swaps and column swaps.  
Each swap moves the `1` by **one step** vertically or horizontally.

Thus, the required number of moves is simply the **Manhattan distance** from the `1` to the center:

