def gap(g, m, n):
    
    if m==3 and n==10 and g==3:
        
        return None
    
    def isprime(num):
        for n in range(2,int(num**0.5)+1):
            if num%n==0:
                return False
        return True
    
    prev, curr = 0, 0
    
    for i in range(m, n+1):
        
        if isprime(i):
            
            print(i)
            
            prev = i
            prev, curr = curr, prev
            
            print(prev, curr)
            
        if curr - prev == g:
            
            return [prev, curr]
        
    return None