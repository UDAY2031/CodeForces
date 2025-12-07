# Way Too Long Words – Codeforces Problem 71A

## 📝 Problem Summary
Some words like "localization" or "internationalization" are so long that writing them repeatedly becomes tiresome.

A word is considered too long if its length is strictly more than 10 characters.  
Such words must be abbreviated using:

first_letter + (number_of_letters_between) + last_letter

### Examples
- localization → l10n
- internationalization → i18n
- pneumonoultramicroscopicsilicovolcanoconiosis → p43s

Words with length ≤ 10 stay unchanged.

---

## 📥 Input Format
- First line: number of words n  
- Next n lines: one lowercase word per line  

---

## 📤 Output Format
- Abbreviated word if length > 10  
- Otherwise unchanged  

---

## ✅ Example

### Input
```
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
```
### Output
```
word
l10n
i18n
p43s
```
---

## 💡 Approach
- If word length ≤ 10 → print word  
- If > 10 → print first letter + (len−2) + last letter  

---
