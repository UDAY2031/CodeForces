# A. Boy or Girl (236A)

**Difficulty:** 800  
**Tags:** strings, implementation  
**Link:** https://codeforces.com/problemset/problem/236/A  

---

## 📝 Problem Statement

A user on a forum chooses a username consisting of lowercase English letters.  
Our hero wants to determine the user's gender based on the username.

His method is simple:

- Count the **number of distinct characters** in the username.
- If the count is **even**, the user is considered **female**.  
- If the count is **odd**, the user is considered **male**.

You must print the result based on this rule.

---

## 📥 Input

- A single non-empty string `s`, where  
  - `1 ≤ |s| ≤ 100`  
  - `s` contains only lowercase English letters.

---

## 📤 Output

Print:

- `"CHAT WITH HER!"` → if the number of distinct characters is **even**  
- `"IGNORE HIM!"` → if the number is **odd**

---

## 🔍 Example (From Codeforces Judge)
```
Input
wjmzbmr

Output
CHAT WITH HER!

Input
xiaodao

Output
IGNORE HIM!
```
### ✔ Explanation

- For `"wjmzbmr"`:  
  Distinct characters = {w, j, m, z, b, r} → **6 (even)** → Female → print `"CHAT WITH HER!"`

- For `"xiaodao"`:  
  Distinct characters = 5 → **odd** → Male → print `"IGNORE HIM!"`

---

## 💡 Notes

- A `set<char>` can be used to count distinct characters.  
- Only uniqueness matters; order does not.  
- Maximum distinct characters possible = 26 (lowercase alphabet).

---
