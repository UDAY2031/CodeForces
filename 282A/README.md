# A. Bit++

**Difficulty:** 800  
**Tags:** implementation  
**Link:** https://codeforces.com/problemset/problem/282/A  

---

## 📝 Problem Statement

You are given a programming language with a single integer variable `X`, initially equal to **0**.

There are `n` statements, and each statement is one of the following:

- `"++X"` → increment `X` by 1  
- `"X++"` → increment `X` by 1  
- `"--X"` → decrement `X` by 1  
- `"X--"` → decrement `X` by 1  

In all cases:

- Any statement containing `"++"` increases `X`.
- Any statement containing `"--"` decreases `X`.

Your task is to execute all `n` statements in order and output the final value of `X`.

---

## 📥 Input

- The first line contains an integer `n` (1 ≤ n ≤ 150).  
- Each of the next `n` lines contains a single statement: `"++X"`, `"X++"`, `"--X"`, or `"X--"`.

---

## 📤 Output

Output a single integer — the **final value** of variable `X` after processing all statements.

---

## 🔍 Example (From Codeforces Judge)

```
Input
1
++X

Output
1

Input
2
X++
--X

Output
0
```

### ✔ Explanation

- In the first example, `X = 0 → 1`, so output is `1`.  
- In the second example:  
  - `X++` makes `X` become `1`  
  - `--X` makes `X` become `0`  
  Final answer → **0**

---

## 💡 Notes

- Whether the operator is before or after `X` does **not** matter for this problem —  
  `"++X"` and `"X++"` both increment.  
  `"--X"` and `"X--"` both decrement.
- You only need to check whether the string contains `"++"` or `"--"`.

---
