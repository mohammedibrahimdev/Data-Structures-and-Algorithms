# Prefix & Suffix

## Definition

The Prefix & Suffix pattern is used to precompute information from the **left (Prefix)** and **right (Suffix)** of an array. This avoids recalculating the same values multiple times and helps optimize the solution.

---

## Prefix

A **Prefix** contains information from the **beginning** of the array up to the current index.

**Think:**
> "What do I already know on the left?"

---

## Suffix

A **Suffix** contains information from the **current index** to the **end** of the array.

**Think:**
> "What do I already know on the right?"

---

## When to Use

Use this pattern when:

- Each index depends on the elements before it.
- Each index depends on the elements after it.
- Repeated calculations lead to **O(n²)**.
- Precomputing can reduce the solution to **O(n)**.

---

## Goal

**Precompute once, reuse many times.**

---

## Time Complexity

- Usually: **O(n)**

## Space Complexity

- Usually: **O(n)**
- Some problems can be optimized to **O(1)**.

---

## Key Idea

> **Prefix = Left Information**  
> **Suffix = Right Information**  
> **Combine both to solve the problem efficiently.**

---

