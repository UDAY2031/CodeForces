# 💻 Codeforces Problem A: Sequence Game

## 📄 Problem Statement

You are given an integer sequence $A$ of length $N$ and a target integer $X$.

You can perform the following operation $N-1$ times:
1.  Select two adjacent numbers $A_i$ and $A_{i+1}$.
2.  Replace them with a new integer $Y$ such that:
    $$\min(A_i, A_{i+1}) \le Y \le \max(A_i, A_{i+1})$$
3.  The sequence length decreases by one, and elements are renumbered.

The question is: **Can the single final number remaining in the sequence be exactly equal to the target $X$?**

---

## 🔍 Solution Insight

The allowed operation, $\min(A_i, A_{i+1}) \le Y \le \max(A_i, A_{i+1})$, is the key.

This operation is essentially equivalent to taking the **convex hull** or **range** of the two numbers. Critically, **the resulting number $Y$ will always be between the two numbers it replaced.**

If you apply this operation repeatedly, the final remaining number will always be bounded by the absolute minimum and maximum of the *entire initial sequence*.

### The Invariant

Let $A_{\text{min}}$ be the minimum value in the initial sequence and $A_{\text{max}}$ be the maximum value in the initial sequence.

* When you replace $A_i$ and $A_{i+1}$ with $Y$, the new minimum of the sequence cannot be less than $\min(A_{\text{min}}, Y)$. Since $Y \ge \min(A_i, A_{i+1}) \ge A_{\text{min}}$, the sequence minimum remains $\ge A_{\text{min}}$.
* Similarly, the new maximum of the sequence cannot be greater than $\max(A_{\text{max}}, Y)$. Since $Y \le \max(A_i, A_{i+1}) \le A_{\text{max}}$, the sequence maximum remains $\le A_{\text{max}}$.

This means that no matter the order of operations or the choice of $Y$, the final remaining number $X_{\text{final}}$ will satisfy:

$$A_{\text{min}} \le X_{\text{final}} \le A_{\text{max}}$$

### The Conclusion

Since we can always choose $Y = \min(A_i, A_{i+1})$ to minimize the resulting sequence element, and $Y = \max(A_i, A_{i+1})$ to maximize it, **any integer $X$ within the range $[A_{\text{min}}, A_{\text{max}}]$ can be the final result.**

The solution is:
* Find the minimum element ($A_{\text{min}}$) and the maximum element ($A_{\text{max}}$) in the initial sequence.
* If $A_{\text{min}} \le X \le A_{\text{max}}$, the answer is **YES**.
* Otherwise, the answer is **NO**.

---

## 📥 Input Format

The input begins with an integer $T$ ($1 \le T \le 500$), the number of test cases. Each test case follows:

1.  A single integer $N$ ($1 \le N \le 100$) — the length of the sequence.
2.  $N$ integers $A_1, A_2, \dots, A_N$ (sequence elements).
3.  A single integer $X$ (the target final number).

## 📤 Output Format

For each test case, output "YES" or "NO".

---

## ✨ Examples Walkthrough

| Input Sequence ($A$) | $N$ | Target ($X$) | $A_{\text{min}}$ | $A_{\text{max}}$ | Check: $A_{\text{min}} \le X \le A_{\text{max}}$ | Output |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `[2, 7, 5]` | 3 | 4 | 2 | 7 | $2 \le 4 \le 7$ (True) | **YES** |
| `[-1, 3, 7, -9, -2]` | 5 | 8 | -9 | 7 | $-9 \le 8 \le 7$ (False) | **NO** |
| `[1, -1, -4, 5, 1, -4]` | 6 | -2 | -4 | 5 | $-4 \le -2 \le 5$ (True) | **YES** |

---

