# 🎨 Codeforces 2172A: ASCII Art Contest

## 📄 Problem Description

The **ASCII Art Contest** features three AI-powered creative assistants—Gemini, ChatGPT, and Claude—each receiving a score between 80 and 100.

The goal is to determine the contest's final result based on the consistency of the judges' scores:

1.  **Check for Consistency:** Calculate the **difference** between the **maximum score** and the **minimum score**.
2.  **Inconsistent Judging:** If the difference is **10 points or more** ($\ge 10$), the judging is deemed inconsistent, and the required output is `check again`.
3.  **Consistent Judging:** If the difference is **less than 10 points** ($< 10$), the judging is "close enough," and the required output is `final X`, where $X$ is the **median** of the three scores.

---

## 📥 Input Format

A single line containing three space-separated integers: $g$, $c$, and $\ell$, representing the scores of Gemini, ChatGPT, and Claude, respectively.

| Variable | Description | Constraints |
| :--- | :--- | :--- |
| **$g, c, \ell$** | The three scores | $80 \le g, c, \ell \le 100$ |

---

## 📤 Output Format

Print a single line with one of the following outputs:

* `check again` (if the maximum score and minimum score difference is $\ge 10$).
* `final X` (where $X$ is the median score, if the difference is $< 10$).

---

## ✨ Examples

| Input | Output | Reasoning |
| :--- | :--- | :--- |
| `88 94 95` | `final 94` | Max: 95, Min: 88. Diff: 7. Since $7 < 10$, print `final` with the Median: 94. |
| `100 80 81` | `check again` | Max: 100, Min: 80. Diff: 20. Since $20 \ge 10$, print `check again`. |
| `98 99 98` | `final 98` | Max: 99, Min: 98. Diff: 1. Since $1 < 10$, print `final` with the Median: 98. |
| `95 86 85` | `check again` | Max: 95, Min: 85. Diff: 10. Since $10 \ge 10$, print `check again`. |

---

## 🛠️ Implementation Strategy

The core of the solution is to efficiently calculate the maximum, minimum, and median of the three input scores.

### **Steps:**

1.  **Read Input:** Read the three scores: $g, c, \ell$.
2.  **Find Range:**
    * Find the **Maximum Score** ($S_{\text{max}}$).
    * Find the **Minimum Score** ($S_{\text{min}}$).
    * Calculate the difference: $D = S_{\text{max}} - S_{\text{min}}$.
3.  **Conditional Output:**
    * If $D \ge 10$, print `check again`.
    * If $D < 10$:
        * Calculate the **Median Score** ($X$). A straightforward way to do this is using the property: $$X = (g + c + \ell) - S_{\text{max}} - S_{\text{min}}$$
        * Print `final X`.

