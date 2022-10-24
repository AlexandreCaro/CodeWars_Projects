"All the example tests and random tests pass. 4 kyu"

def quick_sort(s):
    if len(s) == 1 or len(s) == 0:
       return s
    else:
        pivot = s[0]
        i = 0
        for j in range(len(s)-1):
            if s[j+1] < pivot:
               s[j+1],s[i+1] = s[i+1],s[j+1]
               i += 1
        s[0],s[i] = s[i],s[0]
        first_part = quick_sort(s[:i])
        second_part = quick_sort(s[i+1:])
        first_part.append(s[i])
        return first_part + second_part

def solution(a):
    
    quick_sort(a)
    
    n = len(a)
    
    print(n%2)
    
    if n%2==1:
    
        while len(set(a))>1:

            for j in range(n-1, 0, -1):

                while (a[j] > a[j-1]):

                    a[j] = a[j] - a[j-1]
                    
                a[j], a[j-1] = a[j-1], a[j]
                    
    if n%2 == 0:
        
        while len(set(a))>1:

            for j in range(n-1, 0, -1):

                while (a[j] > a[j-1]):

                    a[j] = a[j] - a[j-1]

                a[j], a[j-1] = a[j-1], a[j]
        
    return sum(a)

def solution_corrige(a):
    
    number_list = a[:]
    
    while len(set(number_list))>1:
        
        smallest_value = min(number_list)
        
        number_list[:] = [(number - smallest_value*(number//smallest_value)) 
        if number > smallest_value and number - smallest_value*(number//smallest_value) > 0
                      else smallest_value for number in number_list]
        
        number_list[:] = list(dict.fromkeys(number_list))
        
    return number_list[0] * len(a)


"""Description
Given an array X of positive integers, its elements are to be transformed by running the following 
operation on them as many times as required:

if X[i] > X[j] then X[i] = X[i] - X[j]

When no more transformations are possible, return its sum ("smallest possible sum").

For instance, the successive transformation of the elements of input X = [6, 9, 21] is detailed below:

X_1 = [6, 9, 12] # -> X_1[2] = X[2] - X[1] = 21 - 9
X_2 = [6, 9, 6]  # -> X_2[2] = X_1[2] - X_1[0] = 12 - 6
X_3 = [6, 3, 6]  # -> X_3[1] = X_2[1] - X_2[0] = 9 - 6
X_4 = [6, 3, 3]  # -> X_4[2] = X_3[2] - X_3[1] = 6 - 3
X_5 = [3, 3, 3]  # -> X_5[1] = X_4[0] - X_4[1] = 6 - 3
The returning output is the sum of the final transformation (here 9).

Example
solution([6, 9, 21]) #-> 9
Solution steps:
[6, 9, 12] #-> X[2] = 21 - 9
[6, 9, 6] #-> X[2] = 12 - 6
[6, 3, 6] #-> X[1] = 9 - 6
[6, 3, 3] #-> X[2] = 6 - 3
[3, 3, 3] #-> X[1] = 6 - 3
Additional notes:
There are performance tests consisted of very big numbers and arrays of size at least 30000. Please write 
an efficient algorithm to prevent timeout."""