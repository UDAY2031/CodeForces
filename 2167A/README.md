# A. Square?

**Difficulty:** 800  
**Tags:** math, sortings  
**Link:** https://codeforces.com/problemset/problem/2167/A  

---

## 📝 Problem Statement

You are given 4 sticks of lengths `a`, `b`, `c`, and `d`. You cannot break or bend them.

Determine whether it is possible to form a square using the given sticks.  
A square is defined as a polygon consisting of 4 vertices, with all sides having equal length and all inner angles equal.  
No two edges of the polygon may intersect each other.

---

## 📥 Input

The first line contains a single integer `t` (1 ≤ t ≤ 10⁴) — the number of test cases.  
Each test case contains four integers `a`, `b`, `c`, and `d` (1 ≤ a, b, c, d ≤ 10).

---

## 📤 Output

For each test case, print `"YES"` if it is possible to form a square using the given sticks; otherwise print `"NO"`.  
You may output each character in any case.

---

## 🔍 Example (From Codeforces Judge)
```
Test Result:
Test: #1, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK

Input
7
1 2 3 4
1 1 1 1
2 2 2 2
1 2 1 2
1 1 5 5
5 5 5 5
4 10 5 9

Output
NO
YES
YES
NO
NO
YES
NO

Answer
NO
YES
YES
NO
NO
YES
NO

Checker Log
ok 7 token(s): yes count is 3, no count is 4


```
## 💡 Notes

- A square requires **all 4 sides equal**.  
- If all stick lengths are the same (e.g., 1 1 1 1 or 5 5 5 5), the answer is `"YES"`.  
- Otherwise, it is `"NO"`.

