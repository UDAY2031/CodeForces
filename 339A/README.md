# A. Helpful Maths

**Difficulty:** 800  
**Tags:** implementation, strings, sorting  
**Link:** https://codeforces.com/problemset/problem/339/A  

---

## 📝 Problem Statement

You are given a string representing a sum of single-digit numbers.  
The numbers are separated by plus signs (`+`). For example: `"3+2+1"`


Your task is to rearrange (sort) the numbers in **non-decreasing order** and output the resulting sum string.

Example:  
`"3+2+1"` should become `"1+2+3"`.

---

## 📥 Input

- A single string `s` containing digits (`1`, `2`, `3`) and `+` signs.  
- The length of the string is between 1 and 100.

---

## 📤 Output

Print the sorted sum string.

---

## 🔍 Example (From Codeforces Judge)

```
Input
3+2+1

Output
1+2+3
```
### ✔ Explanation

- The numbers in the input are: **3, 2, 1**  
- After sorting them → **1, 2, 3**  
- Join them using `'+'` → `"1+2+3"`

---

## 💡 Notes

- Only the digits `1`, `2`, and `3` appear in the input.  
- Plus signs simply separate the numbers.  
- The simplest approach:
  - Extract all digits  
  - Sort them  
  - Rejoin with `'+'` in between

---
