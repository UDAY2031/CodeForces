# 💻 Codeforces Problem A: Same Difference(2166A)

## 📄 Problem Statement

You are given a string $s$ of length $n$, consisting of lowercase letters.

In one operation, you can select an integer $i$ such that $1 \le i < n$ and change $s_i$ into $s_{i+1}$.

What is the minimum number of operations needed to make every character the same? It can be proved that this is always possible.

---

## 🔍 Solution Insight

The problem hinges on the **directional nature** of the operation: $S_i \leftarrow S_{i+1}$.

1.  **The Invariant Character:** Since the operation requires an index $i < n$, there is **no operation** that can modify the last character, $S_N$ (or $S[n-1]$ in 0-based indexing), as it needs an $S_{N+1}$ to change into.
2.  **The Target:** Because $S_N$ cannot be changed, the entire string **must** be converted to $S_N$.
3.  **Minimum Operations:** The minimum number of operations required is simply the count of characters in the prefix $S_1, S_2, \dots, S_{N-1}$ that are **not equal** to the final character, $S_N$.

---

## 📥 Input Format

The input begins with an integer $t$ ($1 \le t \le 20$), the number of test cases. Each test case follows:

1.  A single integer $n$ ($2 \le n \le 100$) — the length of the string.
2.  A string $s$ of length $n$, consisting of lowercase letters.

## 📤 Output Format

For each test case, output a single integer—the minimum number of operations needed.

---

## ✨ Examples

| Input (N, S) | Last Char ($S_N$) | Mismatched Characters (Count) | Output |
| :--- | :--- | :--- | :--- |
| `3`, `qwq` | 'q' | 'w' at index 2 (1 mismatch) | **1** |
| `2`, `aa` | 'a' | None (0 mismatches) | **0** |
| `4`, `test` | 't' | 'e', 's' (2 mismatches) | **2** |
| `5`, `abbac` | 'c' | 'a', 'b', 'b', 'a' (4 mismatches) | **4** |
| `6`, `abcabc` | 'c' | 'a', 'b', 'a', 'b' (4 mismatches) | **4** |

---

