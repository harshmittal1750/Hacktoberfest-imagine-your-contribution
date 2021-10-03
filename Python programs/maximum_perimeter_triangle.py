# problem statement:  Given an array of stick lengths, use  of them to construct a non-degenerate triangle with the maximum possible perimeter. Return an array of the lengths of its sides as  integers in non-decreasing order.
# If there are several valid triangles having the maximum perimeter:
# Choose the one with the longest maximum side.
# If more than one has that maximum, choose from them the one with the longest minimum side.
# If more than one has that maximum as well, print any one them.
# If no non-degenerate triangle exists, return .

# Input Format: 
# The first line contains single integer , the size of array .
# The second line contains  space-separated integers , each a stick length.

from itertools import *
n = int(input())
l = sorted(map(int, input().split()))
ans = (-1, -1, -1)
for i, j, k in product(*repeat(range(n), 3)):
    if i < j < k and l[i] + l[j] > l[k]:
        ans = max(ans, (l[k], l[i], l[j]))
if ans[0] == -1:
    print(-1)
else:    
    print(ans[1], ans[2], ans[0])
