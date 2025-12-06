# 💻 Codeforces Problem A: Same Difference (2166A)

## 📄 Problem Statement

You are given a string **s** of length **n**, consisting only of lowercase letters.

You may perform the following operation any number of times:

- Choose an index **i** such that  
  `1 ≤ i < n`
- Replace  
  `s[i] ← s[i+1]`

Your goal is to determine the **minimum number of operations** required to make **all characters in the string identical**.

It is guaranteed that this is always possible.

---

## 🔍 Solution Insight

The crucial detail lies in the **direction of copying**:

### ➤ You can only copy from **right to left** (from `s[i+1]` to `s[i]`).

Because of this:

### ✔ The last character `s[n]` **cannot be changed**  
There is no `s[n+1]` to copy from, so `s[n]` stays fixed forever.

### ✔ Therefore, the **entire string must ultimately become `s[n]`**.

To achieve this, every character in the prefix:

`s[1], s[2], ..., s[n−1]`


must be changed into `s[n]`.

### 🎯 Minimum operations = count of characters in `s[1..n−1]` not equal to `s[n]`.

---

## 📥 Input Format

- First line: integer **t** — number of test cases  
  `1 ≤ t ≤ 20`

For each test case:

1. Integer **n** — length of the string  
   `2 ≤ n ≤ 100`
2. A string **s** of lowercase letters.

---

## 📤 Output Format

For each test case, print a single integer —  
the **minimum number of operations** needed to make all characters equal.

---

## ✨ Examples

| Input (n, s) | Last Char (`s[n]`) | Characters ≠ `s[n]` | Count | Output |
|--------------|--------------------|-----------------------|--------|--------|
| `3`, `qwq`   | `q`                | `w`                   | 1      | **1** |
| `2`, `aa`    | `a`                | —                     | 0      | **0** |
| `4`, `test`  | `t`                | `e`, `s`              | 2      | **2** |
| `5`, `abbac` | `c`                | `a`, `b`, `b`, `a`    | 4      | **4** |
| `6`, `abcabc`| `c`                | `a`, `b`, `a`, `b`    | 4      | **4** |

---

## 🧠 Example Explanation

### Example: `qwq`
- Last character = `q`
- Characters before it: `q`, `w`
- Only one mismatch: `w`
- So operations required = **1**

---
