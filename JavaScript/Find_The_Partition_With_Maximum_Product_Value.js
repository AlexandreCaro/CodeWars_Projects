function generateSequence(array){
    let last = array[array.length-1];
    
    let n = array.reduce(function(total, item){
      return total + item;
    });
    
    let arrayCopy = array;
    
    let sequenceArray = [];
    let a = 1;
    let somme = 0;
    const sum = (first, second)=> first + second;
    
    for(let i = last; i >= 1; i--){
      array[array.length-1] = i;
      somme = array.reduce(sum);
      while(somme+a<=n){
        a+=1;
        if(somme+a===n){
          sequenceArray.push([...array, a]);
          }
      }
      a = 1;
    }
    
    console.log("sequenceArray", sequenceArray);
    
    return sequenceArray;
    
    }
  
  
  function findPartMaxProd(n){
    
      var maxProduct;
    
    let arr1 = [], arr2 = [];
    
    let j = 0;
      
      for(let i = n; i> 0; i--){
        for(let j = 1; j <= i; j++){
          if(i+j===n){
            console.log("Got it", i, j);
            arr2.push([i, j]);
            arr2.concat(generateSequence([i, j]));
          }
        }
      }
      
    console.log("arr2", arr2);

    "Deuxième solution"

    function generateSequence(array, seqArray, limit){
        let last = array[array.length-1];
        
        let method1;
        
        let n = array.reduce(function(total, item){
          return total + item;
        });
        
        if (n===limit){
          let arrayCopy = array;
      
          let a = 1;
          let somme = 0;
          const sum = (first, second)=> first + second;
      
          for(let i = last; i >= 1; i--){
            array[array.length-1] = i;
            somme = array.reduce(sum);
            while(somme+a<=n){
              a+=1;
              if(somme+a===n){
                seqArray.push([...array, a]);
                }
            }
            a = 1;
          }
        }
        else if(n < limit){
          
          console.log("n", n);
          
          let reste = limit - n; 
          
          console.log("reste", generateSequence([...array, reste], seqArray, limit));
          
          seqArray.push([...generateSequence([...array, reste], seqArray, limit)]);
        }
        
      
        
        console.log("sequenceArray", seqArray);
        
        for(let i = 0; i < seqArray.length; i++){
          if(seqArray[i].length <= 1){
            seqArray.splice(i, 1);
          }
        }
        
        return seqArray;
        
        }
      
      
      function findPartMaxProd(n){
        
          var maxProduct;
        
        let sequenceArray = [];
        
        let arr1 = [], arr2 = [];
          
          for(let i = n; i> 0; i--){
            for(let j = 1; i+j <= n && j <= i; j++){
              console.log("i, j", i, j);
              
                arr2.push([...generateSequence([i, j],sequenceArray, n)]);
              }
            }
        
          
        console.log("arr2", arr2);
        
        return arr2;
      }