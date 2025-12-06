# ✨ Codeforces Problem C: Isamatdin and His Magic Wand

## 📄 Problem Statement

Isamatdin has **n** toys arranged in a row.  
The **i-th** toy has an integer value **aᵢ**.

He wants to sort them, but his magic wand is **broken**.  
The wand **can only swap** two toys **if their values have different parity**:

You may swap (i, j) only if (a[i] % 2) ≠ (a[j] % 2)


This means:

- even ↔ odd → ✔ allowed  
- even ↔ even → ✘ not allowed  
- odd ↔ odd → ✘ not allowed  

Your task is to determine the **lexicographically smallest sequence** that can be formed using **any number of such allowed swaps**.

A sequence **p** is lexicographically smaller than **q** if at the first differing index **i**,  
`p[i] < q[i]`


---

## 📥 Input Format

- First line: integer **t**, the number of test cases  
  `1 ≤ t ≤ 10⁴`
- Each test case contains:
  - Integer **n** — number of toys  
    `1 ≤ n ≤ 2·10⁵`
  - A list of **n** integers  
    `1 ≤ aᵢ ≤ 10⁹`

The **sum of all n** across test cases does **not exceed 2·10⁵**.

---

## 📤 Output Format

For each test case, print the **lexicographically smallest array** achievable using the broken wand.

---

## 🔍 Key Insight

### ✔ Allowed swaps only occur between elements of **different parity**.

This single restriction determines the entire solution.

---

## 🧠 Core Observations

### **1️⃣ If the array contains BOTH even and odd numbers:**
You can always rearrange elements arbitrarily.

Why?  
Because you can keep swapping through elements of opposite parity, allowing movement across the entire array.  
It effectively simulates full sorting.

Thus:

### 👉 **If the array has at least one even and one odd → the entire array can be fully sorted.**

---

### **2️⃣ If the array contains ONLY even numbers or ONLY odd numbers:**
No swaps are possible at all.

Thus:

### 👉 **If all numbers share the same parity → the array stays exactly as it is.**

---

## 🎯 Final Rule

### ✔ If both parities exist → output the sorted array  
### ✔ Otherwise → output the original array

This gives the lexicographically smallest sequence in all valid cases.

---

## ✨ Examples

| Input Array | Parities | Can Swap? | Result |
|-------------|----------|-----------|--------|
| `2 3 1 4` | even + odd | yes | `1 2 3 4` |
| `3 2 1 3 4` | even + odd | yes | `1 2 3 3 4` |
| `3 7 5 1` | all odd | no | `3 7 5 1` |
| `1000000000 2` | all even | no | `1000000000 2` |
| `1 3 5` | all odd | no | `1 3 5` |
| `2 5 3 1 7` | mixed | yes | `1 2 3 5 7` |
| `2 4 8 6` | all even | no | `2 4 8 6` |

---
