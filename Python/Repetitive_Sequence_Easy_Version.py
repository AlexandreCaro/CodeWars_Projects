"4 kyu(medium+)"

"Solution"

from itertools import chain, repeat

def find(n):
    
    if n <= 3:
        
        return [0,1,2,2][n]
    
    arr = [[2]]
    
    arr_sum = 5
    arr_len = 4
    
    for i, arr_i in enumerate(chain.from_iterable(arr), 3):
        arr_sum += i *arr_i
        
        if arr_sum >= n:
            
            x = (arr_sum-n)//i
            return arr_len + arr_i - (x+1)
        
        arr.append(repeat(i, arr_i))
        arr_len += arr_i

def find(n):
    
    print(n)
    
    liste = list()
    
    liste.extend([0,1])
    
    liste.extend([2,2])
    
    number = 3
    count = liste[number]
    
    liste.extend([number]*count)
    
    while len(liste) < n:
        
        number += 1
        count = liste[number]
        
        liste.extend([number]*count)
        
    return liste[n]

"341 Passed"

def find(n):
    
    arr = [0, 1, 2, 2]
    if n <= 3:
        return arr[n]
    else:
        arr_sum = 5
        for i in range(3, n+1):
            arr_sum += i * arr[i]
            if arr_sum >= n:
                x = (arr_sum - n) // i
                return len(arr) + arr[i] - (x+1)
            else:
                arr += [i] * arr[i]

"""Description

Input
You are given input n and return nth(0-based) value of this list.
let;s take example:

seq = [0, 1, 2, 2]
i = 3 and as seq[i]=2, seq = [0, 1, 2, 2, 3, 3]
i = 4 and as seq[i]=3, seq = [0, 1, 2, 2, 3, 3, 4, 4, 4]
i = 5 and as seq[i]=3, seq = [0, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5] and so on.

Some elements of list:

[0, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 88, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 11, 11, 11, 11,
11, 12, 12, 12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 16, 16, 16, 16, 16, 16, 16,17, 17,
17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 18, 19, 19, 19, 19, 19, 19, 19, 20, 20, 20, 20, 20, 20, 20, 20,
21, 21, 21, 21, 21, 21, 21, 21]"""

"""Tests

@test.describe('Example Tests')
def example_tests():
    testing = [[0, 0], [1, 1], [2, 2], [3, 2], [4, 3], [5, 3], [6, 4], [7, 4], [8, 4], [9, 5], [10, 5], [11, 5], [12, 6], 
    [13, 6], [14, 6], [15, 6], [16, 7], [17, 7], [18, 7], [19, 7]]
    
    for nth, expected in testing:
        test.assert_equals(find(nth), expected)"""