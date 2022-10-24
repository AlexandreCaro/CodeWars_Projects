def last_digit_simple(n1, n2):
    
    if n2 == 0:
        return 1
    
    cycle = [n1%10]
    
    while True:
        
        next = (cycle[-1] * n1)%10
        if next == cycle[0]:
            break
            
        cycle.append(next)
        
    return cycle[(n2 - 1) % len(cycle)]

def last_digit(lst):
    # Your Code Here
    
    if len(lst)==0:
        
        return 1
    
    number1, number2 = lst[0], lst[1]
    
    digit = last_digit_simple(number1, number2)
    
    n = len(lst)
    
    if n <= 2:
        
        return digit
    
    else:
        
        for i in range(2, n):
            
            number1, number2 = lst[i], digit
            
            digit = last_digit_simple(number1, number2)
            
    return digit

"""For a given list [x1, x2, x3, ..., xn] compute the last (decimal) digit of x1 ^ (x2 ^ (x3 ^ (... ^ xn))).

E. g., with the input [3, 4, 2], your code should return 1 because 3 ^ (4 ^ 2) = 3 ^ 16 = 43046721.

Beware: powers grow incredibly fast. For example, 9 ^ (9 ^ 9) has more than 369 millions of digits. lastDigit has to deal with such numbers efficiently.

Corner cases: we assume that 0 ^ 0 = 1 and that lastDigit of an empty list equals to 1.

This kata generalizes Last digit of a large number; you may find useful to solve it beforehand."""