"4 kyu(medium+)"

def runoff(voters):
    
    print(voters)
    
    elections = dict()
    
    for voter in voters:
            
        elections[voter[0]] = elections.get(voter[0], 0) + 1
        
    newListe = []
    
    participants = set(x for l in voters for x in l)
    
    print("participants", participants)
    
    losers = {key: 0 for key in participants if key not in list(elections.keys())}
    
    print("first losers", losers)
        
    print("first", elections)
    
    while(len(elections)>1):

        min_value = min(elections.values())
        
        losers = losers | {key: value for key, value in elections.items() if value<=min_value}

        elections = elections | {key:value for key, value in elections.items() if value > min_value}
        
        voters = [list(filter(lambda p: p not in list(losers.keys()), liste[:])) for liste in voters]
        
        print("second voters", voters)
        
        elections = {}
        
        for voter in voters:
            
            if len(voter)==0:
                
                continue
            
            elections[voter[0]] = elections.get(voter[0], 0) + 1
        
        print(len(elections), elections)
    
    if(len(elections)==1):
        
        return next(iter(elections))
    
    return None

"""Description:

Your task is to implement a function that calculates an election winner from a list of voter selections using an Instant Runoff Voting algorithm. 
If you haven't heard of IRV, here's a basic overview (slightly altered for this kata):

Each voter selects several candidates in order of preference.
The votes are tallied from the each voter's first choice.
If the first-place candidate has more than half the total votes, they win.
Otherwise, find the candidate who got the least votes and remove them from each person's voting list.
In case of a tie for least, remove all of the tying candidates.
In case of a complete tie between every candidate, return nil(Ruby)/None(Python)/undefined(JS).
Start over.
Continue until somebody has more than half the votes; they are the winner.
Your function will be given a list of voter ballots; each ballot will be a list of candidates (symbols) in descending order of preference. 
You should return the symbol corresponding to the winning candidate. See the default test for an example!"""

"""Tests:

import codewars_test as test
from solution import runoff

voters = [["dem", "ind", "rep"],
          ["rep", "ind", "dem"],
          ["ind", "dem", "rep"],
          ["ind", "rep", "dem"]]

test.assert_equals(runoff(voters), "ind")

voters = [["a", "c", "d", "e", "b"],
         ["e", "b", "d", "c", "a"],
         ["d", "e", "c", "a", "b"],
         ["c", "e", "d", "b", "a"],
         ["b", "e", "a", "c", "d"]];
test.assert_equals(runoff(voters), None);"""