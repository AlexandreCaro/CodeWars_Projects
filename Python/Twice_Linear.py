"4 kyu(medium+)"

"Solution"

def dbl_linear(n):
    
    liste = [1]
    x = 0
    y = 0
    
    while len(liste)<=n:
        
        a = 2*liste[x]+1
        b = 3*liste[y] + 1
        
        if a> b:
            
            liste.append(b)
            y+=1
        
        elif a < b:
            
            liste.append(a)
            x+=1
            
        else:
            
            liste.append(a)
            x+=1
            y+=1
        
    return liste[n]


"First try: 9/120"

def solve(nums, target):
    
    left, right = 0, len(nums)-1
    ans = 0
    while left <= right:
        
        mid = (left+right)//2
        if target >= nums[mid]:
            
            ans = mid+1
            left = mid+1
            
        else:
            
            right = mid-1
            
    return ans

def dbl_linear(n):
    
    print(n)
    
    # Le problème est qu'il faut générer les nombres de manière appropriée avec le bon ordre
    # et prendre en compte le fait que la liste n'est pas sorted dans la boucle while
	
    u = [1]
    
    k = 0
    
    y, z = 0, 0
    
    while k <= n:
        
        y = 2*u[k]+1
        z = 3*u[k] + 1
        
        if y not in u:
            
            u.insert(solve(u, y), y)
            
        if z not in u:
            
            u.insert(solve(u, z), z)
        
        # print(k, u[k], u)
        
        k+=1
    
    return u[k-1]

"Second try: Passed 9/120"

import bisect

def insert(liste, n):
    
    bisect.insort(liste, n)
    return liste

def dbl_linear(n):
    
    # We can use sets as it is far better to check if an element is present in it
    
    print(n)
    
    # Le problème est qu'il faut générer les nombres de manière appropriée avec le bon ordre
    # et prendre en compte le fait que la liste n'est pas sorted dans la boucle while
	
    u = [1]
    
    k = 0
    
    set_copy = set(u)
    
    y, z = 0, 0
    
    while k <= n:
        
        y = 2*u[k]+1
        z = 3*u[k] + 1
        
        set_copy = set(u)
        
        if y not in set_copy:
        
            insert(u, y)
            
        if z not in set_copy:
            
            insert(u, z)
        
        # print(k, u[k], u)
        
        k+=1
    
    return u[n]

"""Description

Consider a sequence u where u is defined as follows:

The number u(0) = 1 is the first one in u.
For each x in u, then y = 2 * x + 1 and z = 3 * x + 1 must be in u too.
There are no other numbers in u.
Ex: u = [1, 3, 4, 7, 9, 10, 13, 15, 19, 21, 22, 27, ...]

1 gives 3 and 4, then 3 gives 7 and 10, 4 gives 9 and 13, then 7 gives 15 and 22 and so on...

Task:
Given parameter n the function dbl_linear (or dblLinear...) returns the element u(n) of the ordered (with <) sequence u (so, there are no duplicates).

Example:
dbl_linear(10) should return 22

Note:
Focus attention on efficiency"""

"""Tests

import codewars_test as test
from solution import dbl_linear

@test.describe("Twice linear")
def tests():
    def testing(actual, expected):
	    test.assert_equals(actual, expected)
    @test.it("basic tests")
    def basics():
        testing(dbl_linear(10), 22)
        testing(dbl_linear(20), 57)
        testing(dbl_linear(30), 91)
        testing(dbl_linear(50), 175)
        

"""