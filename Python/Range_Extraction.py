def solution(args):
    
    string = ""
    
    n = len(args)
    
    current = args[0]
    
    follow = False
    
    count = 0
    
    for i in range(n):
        
        if args[min(i+1, n-1)] == args[i]+1 and follow == True:
            
            count += 1
            
            continue
            
        elif args[min(i+1, n-1)] == args[i]+1 and follow == False:
            
            current = args[i]
            
            follow = True
            
            count = 1
            
        else:
            
            if follow == True and count > 1:
                
                string += str(current) + "-"
                
                follow = False
                
            elif follow==True and count==1:
                
                string += str(current) + ","
                
                follow = False
                 
            current = args[i]

            string += str(current) + ","
            
            count = 0
            
    return string[:-1]

"""A format for expressing an ordered list of integers is to use a comma separated list of either

individual integers
or a range of integers denoted by the starting integer separated from the end integer in the range by a dash, '-'. 

The range includes all integers in the interval including both endpoints. It is not considered a range unless it spans at 
least 3 numbers. For example "12,13,15-17"

Complete the solution so that it takes a list of integers in increasing order and returns a 
correctly formatted string in the range format.

Example:

solution([-10, -9, -8, -6, -3, -2, -1, 0, 1, 3, 4, 5, 7, 8, 9, 10, 11, 14, 15, 17, 18, 19, 20])
# returns "-10--8,-6,-3-1,3-5,7-11,14,15,17-20"""

"""Tests

test.describe("Sample Test Cases")

test.it("Simple Tests")
test.assert_equals(solution([-6,-3,-2,-1,0,1,3,4,5,7,8,9,10,11,14,15,17,18,19,20]), '-6,-3-1,3-5,7-11,14,15,17-20')
test.assert_equals(solution([-3,-2,-1,2,10,15,16,18,19,20]), '-3--1,2,10,15,16,18-20')"""