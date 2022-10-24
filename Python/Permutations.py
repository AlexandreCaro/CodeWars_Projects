def permutations(string):
    
    def generate_permutations(string, liste, step = 0):
        
        if step == len(string):
            # we've gotten to the end, print the permutation
            liste.append("".join(string))
        for i in range(step, len(string)):
            # copy the string (store as array)
            string_copy = [c for c in string]
             # swap the current index with the step
            string_copy[step], string_copy[i] =string_copy[i], string_copy[step]
             # recurse on the portion of the stringthat has not been swapped yet
            generate_permutations(string_copy, liste, step + 1)
            
        return liste
                
    return list(set(generate_permutations(string, liste=[])))

"Tests"

"""
test.assert_equals(sorted(permutations('a')), ['a']);
test.assert_equals(sorted(permutations('ab')), ['ab', 'ba'])
test.assert_equals(sorted(permutations('aabb')), ['aabb', 'abab', 'abba', 'baab', 'baba', 'bbaa'])

"""

"""In this kata you have to create all permutations of a non empty input string and remove duplicates, 
if present. This means, you have to shuffle all letters from the input in all possible orders.

Examples:

* With input 'a'
* Your function should return: ['a']
* With input 'ab'
* Your function should return ['ab', 'ba']
* With input 'aabb'
* Your function should return ['aabb', 'abab', 'abba', 'baab', 'baba', 'bbaa']
The order of the permutations doesn't matter."""