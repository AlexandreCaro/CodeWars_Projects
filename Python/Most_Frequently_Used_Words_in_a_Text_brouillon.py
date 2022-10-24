"4 kyu(medium+)"

import re

def top_3_words(text):
    
    text = text.lower()
    
    print("before", text)
    
    text = re.sub(' +', ' ', text)
    
    print("after", text)
    
    dictionary_letters = dict()
    
    listeString = re.split("[^\w']+|_", text)
    
    for i in range(len(listeString)):
        
        dictionary_letters[listeString[i]] = dictionary_letters.get(listeString[i],0) + 1

        
    dict_sorted = {k: v for k, v in sorted(dictionary_letters.items(), key = lambda item: item[1], reverse=True)}
    
    if '' in dict_sorted:
        
        del dict_sorted['']
        
    n = len(dict_sorted)
    
    list_dict = list(dict_sorted.keys())
    
    best_ones = list()
    
    print(dict_sorted)
    
    if n <= 3:
        
        for i in range(n):
            
            if all(letter == "'" for letter in list_dict[i]):
                
                continue
                
            best_ones.append(list_dict[i])
                
    else:
        
        for i in range(3):
            
            if all(letter == "'" for letter in list_dict[i]):
                
                continue
                
            best_ones.append(list_dict[i])
            
    return best_ones
        
"""Description

Write a function that, given a string of text (possibly with punctuation and line-breaks), 
returns an array of the top-3 most occurring words, in descending order of the number of occurrences.

Assumptions:
A word is a string of letters (A to Z) optionally containing one or more apostrophes (') in ASCII.
Apostrophes can appear at the start, middle or end of a word ('abc, abc', 'abc', ab'c are all valid)
Any other characters (e.g. #, \, / , . ...) are not part of a word and should be treated as whitespace.
Matches should be case-insensitive, and the words in the result should be lowercased.
Ties may be broken arbitrarily.
If a text contains fewer than three unique words, then either the top-2 or top-1 words should be returned, 
or an empty array if a text contains no words.

Examples:
top_3_words("In a village of La Mancha, the name of which I have no desire to call to
mind, there lived not long since one of those gentlemen that keep a lance
in the lance-rack, an old buckler, a lean hack, and a greyhound for
coursing. An olla of rather more beef than mutton, a salad on most
nights, scraps on Saturdays, lentils on Fridays, and a pigeon or so extra
on Sundays, made away with three-quarters of his income.")
# => ["a", "of", "on"]

top_3_words("e e e e DDD ddd DdD: ddd ddd aa aA Aa, bb cc cC e e e")
# => ["e", "ddd", "aa"]

top_3_words("  //wont won't won't")
# => ["won't", "wont"]"""

""" Tests

import codewars_test as test
from solution import top_3_words

@test.describe("Top 3 words")
def desc1():
    @test.it('Sample tests')
    def it1():
        test.assert_equals(top_3_words("a a a  b  c c  d d d d  e e e e e"), ["e", "d", "a"])
        test.assert_equals(top_3_words("e e e e DDD ddd DdD: ddd ddd aa aA Aa, bb cc cC e e e"), ["e", "ddd", "aa"])
        test.assert_equals(top_3_words("  //wont won't won't "), ["won't", "wont"])
        test.assert_equals(top_3_words("  , e   .. "), ["e"])
        test.assert_equals(top_3_words("  ...  "), [])
        test.assert_equals(top_3_words("  '  "), [])
        test.assert_equals(top_3_words("  '''  "), [])
        test.assert_equals(top_3_words('''In a village of La Mancha, the name of which I have no desire to call to
        mind, there lived not long since one of those gentlemen that keep a lance
        in the lance-rack, an old buckler, a lean hack, and a greyhound for
        coursing. An olla of rather more beef than mutton, a salad on most
        nights, scraps on Saturdays, lentils on Fridays, and a pigeon or so extra
        on Sundays, made away with three-quarters of his income.'''), ["a", "of", "on"])"""