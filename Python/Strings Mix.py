import copy

def mix(s1, s2):
    
    dict1 = dict()
    dict2 = dict()
    
    for letter in s1:
        
        if letter.isalpha() and letter.islower():
            
            dict1[letter] = dict1.get(letter, 0) + 1
            
    for letter in s2:
        
        if letter.isalpha() and letter.islower():
            
            dict2[letter] = dict2.get(letter, 0) + 1
            
    dict1 = dict(sorted(dict1.items(), key= lambda x: x[1], reverse=True))
    dict2 = dict(sorted(dict2.items(), key = lambda x: x[1], reverse=True))
    
    dict_final = dict()
    
    for key1 in dict1.keys():
        
        if dict2.get(key1, 0) > dict1[key1]:
            
            dict_final[key1] = ("2", dict2[key1])
            
        elif dict2.get(key1, 0) == dict1[key1]:
            
            dict_final[key1] = ("=", dict1[key1])
            
        else:
            
            dict_final[key1] = ("1", dict1[key1])
            
    for key2 in dict2.keys():
        
        if dict1.get(key2, 0) > dict2[key2]:
            
            dict_final[key2] = ("1", dict1[key2])
            
        elif dict1.get(key2, 0) == dict2[key2]:
            
            dict_final[key2] = ("=", dict2[key2])
            
        else:
            
            dict_final[key2] = ("2", dict2[key2])
    
    dict_copied = copy.deepcopy(dict_final)
    
    for key in dict_copied.keys():
        
        if dict_final[key][1]==1:
            
            del dict_final[key]
            
    res = {val[0] : val[1] for val in sorted(dict_final.items(), key = lambda x: (-x[1][1], x[1][0], x[0])
    )}
        
    print("res", res)
    
    string = ""
    
    for key, val in res.items():

        string += val[0] + ":" + key * val[1] + "/"
        
    final_string = string[:-1]
        
    return final_string

"""Given two strings s1 and s2, we want to visualize how different the two strings are.
We will only take into account the lowercase letters (a to z). First let us count the frequency 
of each lowercase letters in s1 and s2.

s1 = "A aaaa bb c"

s2 = "& aaa bbb c d"

s1 has 4 'a', 2 'b', 1 'c'

s2 has 3 'a', 3 'b', 1 'c', 1 'd'

So the maximum for 'a' in s1 and s2 is 4 from s1; the maximum for 'b' is 3 from s2. 
In the following we will not consider letters when the maximum of their occurrences is 
less than or equal to 1.

We can resume the differences between s1 and s2 in the following string: "1:aaaa/2:bbb" where 
1 in 1:aaaa stands for string s1 and aaaa because the maximum for a is 4. In the same manner 2:bbb 
stands for string s2 and bbb because the maximum for b is 3.

The task is to produce a string in which each lowercase letters of s1 or s2 appears as many times 
as its maximum if this maximum is strictly greater than 1; these letters will be prefixed by the
number of the string where they appear with their maximum value and :. If the maximum is in s1 as
well as in s2 the prefix is =:.

In the result, substrings (a substring is for example 2:nnnnn or 1:hhh; it 
contains the prefix) will be in decreasing order of their length and when they have 
the same length sorted in ascending lexicographic order (letters and digits - more precisely 
sorted by codepoint); the different groups will be separated by '/'. See examples and "Example Tests".

Hopefully other examples can make this clearer.

s1 = "my&friend&Paul has heavy hats! &"
s2 = "my friend John has many many friends &"
mix(s1, s2) --> "2:nnnnn/1:aaaa/1:hhh/2:mmm/2:yyy/2:dd/2:ff/2:ii/2:rr/=:ee/=:ss"

s1 = "mmmmm m nnnnn y&friend&Paul has heavy hats! &"
s2 = "my frie n d Joh n has ma n y ma n y frie n ds n&"
mix(s1, s2) --> "1:mmmmmm/=:nnnnnn/1:aaaa/1:hhh/2:yyy/2:dd/2:ff/2:ii/2:rr/=:ee/=:ss"

s1="Are the kids at home? aaaaa fffff"
s2="Yes they are here! aaaaa fffff"
mix(s1, s2) --> "=:aaaaaa/2:eeeee/=:fffff/1:tt/2:rr/=:hh"
Note for Swift, R, PowerShell
The prefix =: is replaced by E:

s1 = "mmmmm m nnnnn y&friend&Paul has heavy hats! &"
s2 = "my frie n d Joh n has ma n y ma n y frie n ds n&"
mix(s1, s2) --> "1:mmmmmm/E:nnnnnn/1:aaaa/1:hhh/2:yyy/2:dd/2:ff/2:ii/2:r"""