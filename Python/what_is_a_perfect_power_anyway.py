"""A perfect power is a classification of positive integers:

In mathematics, a perfect power is a positive integer that can be expressed as an integer power of another positive integer. More formally, n is a perfect power if there exist natural numbers m > 1, and k > 1 such that mk = n.

Your task is to check wheter a given integer is a perfect power. If it is a perfect power, return a pair m and k with mk = n as a proof. Otherwise return Nothing, Nil, null, NULL, None or your language's equivalent.

Note: For a perfect power, there might be several pairs. For example 81 = 3^4 = 9^2, so (3,4) and (9,2) are valid solutions. However, the tests take care of this, so if a number is a perfect power, return any pair that proves it.

Examples
isPP(4) => [2,2]
isPP(9) => [3,2]
isPP(5) => None"""

import math

def isPP(n):
    
    for k in range(2,math.ceil(math.sqrt(n))+1):
        
        for m in range(math.ceil(n**(1/k)+1)):
            
            if m**k == n:
                
                return [m, k]
            
    return None

"Tests"

from random import random, randrange
from math import log, floor

from codewars_test import test

test.describe("perfect powers")
test.it("should work for some examples")
test.assert_equals(isPP(4), [2,2], "4 = 2^2")
test.assert_equals(isPP(9), [3,2], "9 = 3^2")
test.assert_equals(isPP(5), None, "5 isn't a perfect power")

test.it("should work for the first perfect powers")
pp = [4, 8, 9, 16, 25, 27, 32, 36, 49, 64, 81, 100, 121, 125, 128, 144, 169, 196, 216, 225, 243, 256, 289, 324, 343, 361, 400, 441, 484]
for item in pp:
    test.expect(isPP(item) != None, "the perfect power "+str(item)+" wasn't recognized as one")

test.it("should work for random perfect powers")
for i in range(100):
    m = 2 + floor(random() * 255)
    k = 2 + floor(random() * log(268435455) / log(m))
    l = m**k
    r = isPP(l)
    if r==None:
        test.expect(r != None, str(l) + " is a perfect power")
        break
    elif r[0]**r[1] != l:
        test.assert_equals(r[0]**r[1], l, "your pair (" + str(r[0]) + ", "+ str(r[1])+ ") doesn't work for "+ str(l))
        break
      
        
test.it("should return valid pairs for random inputs")
for i in range(100):
    l = randrange(65535);
    r = isPP(l);
    if r != None and r[0]**r[1] != l:
        test.assert_equals(r[0]**r[1], l, "your pair ("+str(r[0])+", "+str(r[1])+") doesn't work for "+str(l))
        break