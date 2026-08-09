/*
Problem      : Find the Duplicate Number
Platform     : LeetCode
Problem ID   : 287

Pattern      : Fast & Slow Pointers (Floyd's Cycle Detection)
Difficulty   : Medium

Approach:
- Think of each array value as a pointer to another index.
- Because one number is repeated, this creates a cycle.
- Use two pointers:
    slow → moves one step
    fast → moves two steps
- When they meet, we know a cycle exists.
- Now put slow back at index 0.
- Move both pointers one step at a time.
- The point where they meet again is the duplicate number.

Example:
nums = [1, 3, 4, 2, 2]

Think like:
index → next index

0 → 1 → 3 → 2 → 4
        ↑         ↓
        └─────────┘

The cycle starts at 2, so 2 is the duplicate.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- First learned how to see an array as a linked-list-like structure.
- Learned that a repeated value can create a cycle.
- Learned Floyd's Fast & Slow Pointer algorithm to find
  the start of that cycle.

Mistakes:
- None
*/

#include <stdio.h>

int findDuplicate(int* nums, int numsSize)
{
    int slow = 0;
    int fast = 0;

    // Phase 1: Find a meeting point inside the cycle
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];

    } while (slow != fast);

    // Phase 2: Find the starting point of the cycle
    slow = 0;

    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main()
{
    int n;

    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &nums[i]);
    }

    int answer = findDuplicate(nums, n);

    printf("%d\n", answer);

    return 0;
}