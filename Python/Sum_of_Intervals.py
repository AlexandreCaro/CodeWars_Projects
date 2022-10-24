"4 kyu(medium+)"

"Solution"

def sum_of_intervals(intervals):
    
    number = []
    maxn = 0
    minn = 0
    
    for i in intervals:
        
        if i[1] > maxn:
            
            maxn = i[1]
            
        if i[0] < minn:
            
            minn = i[0]
            
    for i in range(0, maxn-minn):
        
        number.append(0)
        
    for i in intervals:
        
        for j in range(i[0]-minn, i[1]-minn):
            
            number[j] = 1
            
    return sum(number)

"First try"

import copy

def sum_of_intervals(intervals):
    
    print(intervals)
    
    intervals_list = [list(x) for x in intervals]
    
    intervals_list.sort()
    
    print(intervals_list)
    
    copy_intervals = copy.deepcopy(intervals_list)
    
    somme = 0
    
    for i in range(len(copy_intervals)):
        
        if i >= len(intervals_list):
            
            break
        
        if i == len(intervals_list)-1:
            
            somme += intervals_list[i][1] - intervals_list[i][0]
            
            continue
        
        if intervals_list[i][1] > intervals_list[i+1][0]:
            
            if intervals_list[i][1] < intervals_list[i+1][1]:
                
                intervals_list[i][1] = intervals_list[i+1][1]
                
                intervals_list.pop(i+1)
            
            elif intervals_list[i][1] >= intervals_list[i+1][1]:
                
                intervals_list.pop(i+1)
            
            somme += intervals_list[i][1] - intervals_list[i][0]
            
    return somme

"Deuxième essai"

import copy

def sum_of_intervals(intervals):
    
    n = len(intervals)
    
    intervals = [list(x) for x in intervals]
    
    intervals.sort()
    
    print("intervals", intervals)
    
    newListe = list()
    
    for i in range(n):
        
        if i>=len(intervals):
            
            break
        
        if i == len(intervals)-1:
            
            newListe.append(intervals[i])
            
            break
        
        if intervals[i][0] < intervals[i+1][0] and intervals[i][1] < intervals[i+1][0]:
            
            newListe.append(intervals[i])
            
        elif intervals[i][1] >= intervals[i+1][0] and intervals[i][1] <= intervals[i+1][1]:
            
            newListe.append([intervals[i][0], intervals[i+1][1]])
            
            #print(i, intervals[i+1], newListe)
            
            intervals.pop(i+1)
            
        else:
            
            newListe.append(intervals[i])
            
    somme = 0
    
    j = 0
    
    while j < len(newListe):
        
        if j==len(newListe)-1:
            
            break
            
        i = 0
            
        while newListe[i+1][0] < newListe[i][1] and newListe[i+1][1] > newListe[i][1]:
            
            newListe[i][1] = newListe[i+1][1]
            
            newListe.pop(i+1)
            
            i+=1
            
            if i == len(newListe)-1:
            
                break
                
        if j == len(newListe)-1:
            
            break
        
        while newListe[j+1][1] < newListe[j][1]:
            
            newListe.pop(j+1)
            
            j+=1
            
            print("Got it")
            
            if j==len(newListe)-1:
                
                break
            
        j+=1
        
    print("newListe", newListe)
            
    for liste in newListe:
        
        somme += liste[1] - liste[0]
            
    return somme

"""Write a function called sumIntervals/sum_intervals() that accepts an array of intervals, and returns the sum of all the 
interval lengths. Overlapping intervals should only be counted once.

Intervals
Intervals are represented by a pair of integers in the form of an array. The first value of the interval will always be less 
than the second value. Interval example: [1, 5] is an interval from 1 to 5. The length of this interval is 4.

Overlapping Intervals
List containing overlapping intervals:

[
   [1,4],
   [7, 10],
   [3, 5]
]
The sum of the lengths of these intervals is 7. Since [1, 4] and [3, 5] overlap, we can treat the interval as [1, 5], 
which has a length of 4.

Examples:
sumIntervals( [
   [1,2],
   [6, 10],
   [11, 15]
] ); // => 9

sumIntervals( [
   [1,4],
   [7, 10],
   [3, 5]
] ); // => 7

sumIntervals( [
   [1,5],
   [10, 20],
   [1, 6],
   [16, 19],
   [5, 11]
] ); // => 19"""

"""Tests

from solution import sum_of_intervals
import codewars_test as test

@test.describe("Fixed tests")
def fixed_tests():
    @test.it("Tests")
    def it_1():
        test.assert_equals(sum_of_intervals([(1, 5)]), 4)
        test.assert_equals(sum_of_intervals([(1, 5), (6, 10)]), 8)
        test.assert_equals(sum_of_intervals([(1, 5), (1, 5)]), 4)
        test.assert_equals(sum_of_intervals([(1, 4), (7, 10), (3, 5)]), 7)"""