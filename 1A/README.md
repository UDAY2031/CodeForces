# A. Theatre Square (1A)

**Difficulty:** 1000   
**Tags:** math, implementation  
**Link:** https://codeforces.com/problemset/problem/1/A  

---

## 📝 Problem Statement

The Theatre Square in the capital of Berland has a rectangular shape of size **n × m** meters.  
For paving the square, the city uses **granite flagstones**, each of size **a × a** meters.

Your task is to calculate the **minimum number of flagstones** needed to fully cover the entire square.

### Conditions:
- You **cannot break** flagstones.
- Flagstones may extend **beyond** the square as long as the square is fully covered.
- Flagstones must be placed **parallel** to the edges of the square.

---

## 📥 Input

The input consists of three integers:

- `n` — height of the rectangle  
- `m` — width of the rectangle  
- `a` — side length of each square flagstone  

Constraints:  
`1 ≤ n, m, a ≤ 10⁹`

---

## 📤 Output

Print a single integer — the **minimum number of flagstones** required.

---

```
Input
6 6 4

Output
4
```
### ✔ Explanation

We need to cover a **6 × 6** square with **4 × 4** tiles.

- Tiles along `n`:  
  `ceil(6 / 4) = 2`
  
- Tiles along `m`:  
  `ceil(6 / 4) = 2`

Total tiles needed:  
`2 × 2 = 4`

## 🔍 Example (From Codeforces Judge)

