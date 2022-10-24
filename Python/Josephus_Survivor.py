def josephus_survivor(n,k):
    
    index = 0
    
    liste = list(range(1, n+1))
    
    if len(liste)==1:
        
        return liste[0]
    
    if (index+(k-1))%len(liste)==index+(k-1):
            
            index = index + (k-1)
            
    else:
            
        index = (index+(k-1))%len(liste)
    
    choice = liste[index]
    
    liste.remove(choice)
    
    print(liste)
    
    while len(liste)>1:
        
        if (index+(k-1))%len(liste)==index+(k-1):
            
            index = index + (k-1)
            
        else:
            
            index = (index+(k-1))%len(liste)
            
        choice = liste[index]
        
        liste.remove(choice)
        
    return liste[0]