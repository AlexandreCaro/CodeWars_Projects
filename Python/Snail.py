"4 kyu(medium++)"

def snail_solution(snail_map):
    ans = []
    
    if(len(snail_map)==0): return []
    
    m, n = len(snail_map), len(snail_map[0])
    
    seen = [[0 for i in range(n)] for j in range(m)]
    
    dr = [0, 1, 0, -1]
    dc = [1, 0, -1, 0]
    x, y, di = 0, 0, 0
    
    for i in range(n*m):
        
        ans.append(snail_map[x][y])
        seen[x][y] = True
        cr = x + dr[di]
        cc = y + dc[di]
        
        if(0<=cr and cr < m and 0 <= cc and cc < n and not(seen[cr][cc])):
            x = cr
            y = cc
        else:
            di = (di+1)%4
            x = x + dr[di]
            y = y + dc[di]
            
    return ans

"""Snail Sort
Given an n x n array, return the array elements arranged from outermost elements to the middle element, traveling clockwise.

array = [[1,2,3],
         [4,5,6],
         [7,8,9]]
snail(array) #=> [1,2,3,6,9,8,7,4,5]
For better understanding, please follow the numbers of the next array consecutively:

array = [[1,2,3],
         [8,9,4],
         [7,6,5]]
snail(array) #=> [1,2,3,4,5,6,7,8,9]
This image will illustrate things more clearly:


NOTE: The idea is not sort the elements from the lowest value to the highest; the idea is to traverse the 2-d array in a 
clockwise snailshell pattern.

NOTE 2: The 0x0 (empty matrix) is represented as en empty array inside an array [[]]."""

"""Tests:

array = [[1,2,3],
         [4,5,6],
         [7,8,9]]
expected = [1,2,3,6,9,8,7,4,5]
test.assert_equals(snail(array), expected)


array = [[1,2,3],
         [8,9,4],
         [7,6,5]]
expected = [1,2,3,4,5,6,7,8,9]
test.assert_equals(snail(array), expected)"""