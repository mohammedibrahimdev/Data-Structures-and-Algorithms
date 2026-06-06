# STL (C++) — Quick Reference

## Purpose
STL is used to solve problems faster by using built-in data structures and algorithms instead of writing from scratch.

---

## When to Use What

### Array / Dynamic Storage
- vector → general array (most used)

---

### Stack / Queue Problems
- stack → LIFO (monotonic stack, expression)
- queue → BFS, level order
- deque → sliding window / 0-1 BFS

---

### Searching / Frequency
- set → sorted unique values
- map → key-value (sorted)
- unordered_map → fast frequency counting (most important)

---

### Greedy / Optimization
- priority_queue → heap (max/min)
  - top K problems
  - shortest path (Dijkstra)

---

## Common Algorithms

- sort(v.begin(), v.end())
- reverse(v.begin(), v.end())
- lower_bound (first >= x)
- upper_bound (first > x)
- max_element
- min_element
- accumulate

---

## Key STL Use Patterns

- Frequency counting → unordered_map
- Sorting + greedy → vector + sort
- BFS → queue
- DFS simulation → stack
- Heap problems → priority_queue
- Ordered queries → set / map

---

## Core Idea
Use STL to reduce coding time and focus only on logic.