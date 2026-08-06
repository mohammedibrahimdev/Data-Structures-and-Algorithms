/*
Problem      : Reverse String Prefix
Platform     : LeetCode
Problem ID   : 3794

Pattern      : Two Pointers
Difficulty   : Easy

Approach:
- Place one pointer at the beginning of the prefix.
- Place another pointer at the end of the prefix.
- Swap the characters at both pointers.
- Move the pointers towards each other until they meet.
- Return the modified string.

Time Complexity : O(k)
Space Complexity: O(1)

Learning:
- Learned how to reverse part of a string using the
  Two Pointers technique.
- Practiced in-place string modification with pointers.

Mistakes:
- None
*/

#include <stdio.h>

void swap(char *, char *);

char* reversePrefix(char* s, int k)
{
    int rear = 0;
    int back = k - 1;

    while (rear < back)
    {
        swap(&s[rear], &s[back]);
        rear++;
        back--;
    }

    return s;
}

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    char str[100];
    int k;

    scanf("%s", str);
    scanf("%d", &k);

    printf("%s\n", reversePrefix(str, k));

    return 0;
}
