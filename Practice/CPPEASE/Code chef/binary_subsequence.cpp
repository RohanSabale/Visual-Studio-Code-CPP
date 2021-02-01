/*
You have a binary string s of length N

.

What is the length of the shortest subsequence of s

that needs to be erased for the resulting string to be non-decreasing?
Input:

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
The first line of each test case contains a single integers N
.
The second line contains a single string s
of length N

    .

Output:

For each test case, print a single line containing one integer −

the length of the shortest subsequence that satisfies the property.
Constraints

    1≤T≤104

1≤N≤105
The sum of N
over all test cases does not exceed 106
Every character in every string is either 0
or 1

    .

Subtasks

Subtask #1 (30 points):

    T≤1000

N≤100

Subtask #2 (70 points): original constraints
Sample Input:

6
2
01
3
110
5
10101
5
10011
6
111000
19
1101000010110111010

Sample Output:

0
1
2
1
3
7

EXPLANATION:

Example case 1: The string is already non-decreasing, so we don't need to remove any elements. Note that we may choose an empty subsequence.

Example case 2: We can remove s3
to get the resulting string 11

which satisfies the condition.

Example case 3: We can remove s2
and s4 to get the resulting string 111

which satisfies the condition.

Example case 4: We can remove s1
to get the resulting string 0011

which satisfies the condition.

Example case 5: We can remove s1
, s2 and s3 to get the resulting string 000 which satisfies the condition. Or we can remove s4, s5 and s6 to get 111.
*/


#include<bits