"""The maximum sum subarray problem consists in finding the maximum sum of a contiguous subsequence in an array or list of integers:

max_sequence([-2, 1, -3, 4, -1, 2, 1, -5, 4])
# should be 6: [4, -1, 2, 1]
Easy case is when the list is made up of only positive numbers and the maximum sum is the sum of the whole array. If the list is made up of only negative numbers, return 0 instead.

Empty list is considered to have zero greatest sum. Note that the empty list or array is also a valid sublist/subarray.

"""

from sys import maxsize

def max_sequence(arr):
    
    if all(v<0 for v in arr): return 0
    
    if arr==[]:
        
        return 0
    
    max_so_far = -maxsize - 1
    max_ending_here = 0
    start = 0
    end = 0
    s = 0
    
    size = len(arr)
    
    for i in range(size):
        
        max_ending_here += arr[i]
        
        if max_so_far < max_ending_here:
            
            max_so_far = max_ending_here
            start = s
            end = i
            
        if max_ending_here < 0:
            
            max_ending_here = 0
            s = i+1
            
    return max_so_far

from codewars_test import test

test.describe("Tests")
test.it('should work on an empty array')   
test.assert_equals(max_sequence([]), 0)
test.it('should work on the example')
test.assert_equals(max_sequence([-2, 1, -3, 4, -1, 2, 1, -5, 4]), 6)