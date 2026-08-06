/*
Problem      : Count Pairs Whose Sum is Less than Target
Platform     : LeetCode
Problem ID   : 2824

Pattern      : Brute Force / Nested Loops
Difficulty   : Easy

Approach:
- Traverse the array using two nested loops.
- For each element, compare it with every element
  after it.
- If the sum of the pair is less than the target,
  increment the count.
- Return the total number of valid pairs.

Time Complexity : O(n²)
Space Complexity: O(1)

Learning:
- Learned how to generate all unique pairs using
  nested loops.
- Practiced checking pair conditions and counting
  valid pairs.

Mistakes:
- None
*/

#include <stdio.h>

int countPairs(int* nums, int numsSize, int target);

int main()
{
    int n, target;

    scanf("%d", &n);

    int nums[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    printf("%d\n", countPairs(nums, n, target));

    return 0;
}

int countPairs(int* nums, int numsSize, int target) {
    
    int i = 0, j = 0;
    int count = 0;

    while(numsSize > i){
        j = i+1;

        while( numsSize > j)
        {
            if(nums[i] + nums[j]  < target)
            count++;
            j++;
        }
        i++;
    }

    return count;
}
