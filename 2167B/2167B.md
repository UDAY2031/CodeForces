# B. Your Name?

Difficulty: 800  
Tags: strings, implementation  
Link: https://codeforces.com/problemset/problem/2167/B  

---

## 📝 Problem Statement

You are given two strings s and t of equal length n.
You must determine whether both strings contain the same multiset of characters.

In simple terms:  
Check whether s is an anagram of t.

---

## 📥 Input

The first line contains an integer a — the number of test cases.  
Each test case contains:
- One integer n — the length of both strings  
- One string s  
- One string t  

Constraints:
1 ≤ a ≤ 10⁴  
1 ≤ n ≤ 50  
Strings consist only of lowercase English letters.

---

## 📤 Output

For each test case, print:
YES — if s and t contain the same characters with the same frequencies  
NO — otherwise

---

## 🔍 Example (From Codeforces Judge)

```
Test Result:
Test: #1, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK

Input
5
3
aba
baa
4
abcd
dcba
3
abc
abd
5
aaaaa
aaaaa
4
mnop
ponm

Output
YES
YES
NO
YES
YES

Answer
YES
YES
NO
YES
YES

Checker Log
ok 5 token(s): yes count is 4, no count is 1
```
---

## 💡 Notes

- Two strings match only if their character frequencies match exactly.  
- Sorting or frequency counting both work.  
