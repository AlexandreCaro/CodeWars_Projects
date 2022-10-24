from itertools import product

def get_pins(observed):
    
    dictionary = {"1":["1", "2", "4"], "2":["1","2", "3", "5"], "3":["2","3", "6"], 
                  "4":["1","4", "5", "7"], "5":["2", "4","5", "6", "8"], 
                  "6": ["3", "5","6", "9"],"7": ["4","7", "8"], 
                  "8": ["5", "7", "8", "9", "0"], "9": ["6", "8", "9"], "0":["0", "8"]}
    
    string_len = len(observed)
    
    if string_len ==1: return dictionary[observed[0]]
    
    liste = dictionary[observed[0]]
    
    for i in range(1, string_len):
        
        liste2 = dictionary[observed[i]]
        
        ans = list(product(liste, liste2))
        
        liste = ans[:]
        
    # newListe contient les bonnes combinaisons, il faut juste les unpack et les mettre sous la
    # forme d'un string
    
    print(liste)
    
    newListe = [(z, *x) for z, x in liste]
    
    for tupl in newListe:

        for element in tupl:

            if isinstance(element, tuple):
    
    print("newListe", newListe)
    
    return newListe