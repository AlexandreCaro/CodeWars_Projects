"4 kyu(medium++)"

"150/150 passed, 518ms"

from itertools import permutations

def next_bigger_final(n):
    
    string = str(n)
        
    i = 2
    
    premieres = string[:-i]
            
    dernieres = string[-i:]

    perms = ["".join(p) for p in permutations(dernieres)]

    perms.sort()

    for element in perms:

        if(int(premieres+element)>n):

            return int(premieres+element)
        
    i+=1
        
    while(dernieres==perms[-1] and i < 7):
        
        premieres = string[:-i]
            
        dernieres = string[-i:]

        perms = ["".join(p) for p in permutations(dernieres)]

        perms.sort()

        for element in perms:

            if(int(premieres+element)>n):

                return int(premieres+element)
            
        i+=1

    return -1
    
    # Il faut permuter d'abord les deux derniers digits, voir si c'est plus grand, puis
    # les trois derniers, etc.

import itertools

def next_bigger(n):
    
    string = str(n)
    
    liste = [str(d) for d in str(n)]
    
    permutations = itertools.permutations(liste)
    
    numbers = list(set([int(str("".join(map(str, n)))) for n in permutations]))
    
    numbers.sort()
    
    index = numbers.index(n)
    
    next = numbers[index+1]
    
    return next

"7/7"

import itertools

def next_bigger2(n):
    
    string = str(n)
    
    number = n+1
    
    listeCheck = [str(d) for d in str(number)]
    
    listeCheck.sort()
    
    listeNum = [str(d) for d in str(n)]
    
    listeNum.sort()
    
    while(listeCheck != listeNum):
        number += 1
        listeCheck = [str(d) for d in str(number)]
        listeCheck.sort()
    
    
    return number

"Succès 133 / 7 Failed"

from itertools import permutations

def next_bigger3(n):
    
    string = str(n)
    
    premieres = string[:-2]
    
    dernieres = string[-2:]
    
    print(dernieres)
    
    perms = [''.join(p) for p in permutations(dernieres)]
    
    perms.sort()
    
    if(dernieres==perms[-1]):
        
        premieres = string[:-3]
        
        dernieres = string[-3:]
        
        perms = [''.join(p) for p in permutations(dernieres)]
        
        perms.sort()
        
        for element in perms:
            
            if(int(premieres+element)>n):
                
                return int(premieres+element)
        
    for element in perms:
        
        if(int(premieres+element)>n):
            
            return int(premieres+element)
        
    return -1

"""Create a function that takes a positive integer and returns the next bigger number that can be formed by rearranging its 
digits. For example:

12 ==> 21
513 ==> 531
2017 ==> 2071
nextBigger(num: 12)   // returns 21
nextBigger(num: 513)  // returns 531
nextBigger(num: 2017) // returns 2071
If the digits can't be rearranged to form a bigger number, return -1 (or nil in Swift):

9 ==> -1
111 ==> -1
531 ==> -1
nextBigger(num: 9)   // returns nil
nextBigger(num: 111) // returns nil
nextBigger(num: 531) // returns nil"""

"""Tests

test.assert_equals(next_bigger(12),21)
test.assert_equals(next_bigger(513),531)
test.assert_equals(next_bigger(2017),2071)
test.assert_equals(next_bigger(414),441)
test.assert_equals(next_bigger(144),414)"""