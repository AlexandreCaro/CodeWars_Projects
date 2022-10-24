"freeCodeCamp final project"

let evaluate = function(diff, newDict){
    let dictionary = {"PENNY":0.01, "NICKEL":0.05, "DIME":0.1, "QUARTER":0.25, "ONE":1, "FIVE":5, "TEN":10, "TWENTY":20, 
    "ONE HUNDRED":100};
  
    let listKeys = Object.keys(dictionary);
  
    let listValues = Object.values(dictionary);
  
    let listDiff = listValues.map(x=> x - diff);
  
    let index= listDiff.findIndex(x => x>0)-1;
  
    //console.log(newDict);
  
    while(newDict[listKeys[index]]===0){
      index -= 1;
    }
  
    //console.log(listValues, listDiff, diff);
  
    return listKeys[index];
  
  }
  
  function checkCashRegister(price, cash, cid) {
  
    let dictionary = {"PENNY":0.01, "NICKEL":0.05, "DIME":0.1, "QUARTER":0.25, "ONE":1, "FIVE":5, "TEN":10, "TWENTY":20, "ONE HUNDRED":100};
  
    let change;
  
    let arrayType = [];
  
    let difference = cash - price;
  
    let cidictionary = {};
  
    let i = 0;
  
    cidictionary = Object.fromEntries(cid);
  
    let typeMoney = evaluate(difference, cidictionary);
  
    while(difference>0 && i < cid.length){
      typeMoney = evaluate(difference, cidictionary);
      arrayType.push([typeMoney, 0]);
  
      // cidictyionary[typeMoney] est égal à 0 et la fonction evaluate ne le voit pas, c'est pour ça qu'il y une bouvle infinie.
  
      console.log(difference);
  
      while (difference- dictionary[typeMoney]>=0 && cidictionary[typeMoney] > 0){
  
        difference = parseFloat((difference - dictionary[typeMoney]).toFixed(2));
  
        cidictionary[typeMoney] = cidictionary[typeMoney] - dictionary[typeMoney];
  
        arrayType[i][1] += dictionary[typeMoney];
  
        console.log(difference);
  
      }
  
    i+=1
  
    }
  
    //console.log(arrayType);
  
    // We have to check if every value of cidictionary is equal to 0 or not.
  
    let finalValues = Object.values(cidictionary);
  
    for(let i=0; i < finalValues.length; i++){
      if(finalValues[i]<0.01){
        finalValues[i]=0;
      }
    }
  
    let result = finalValues.every(e => e===0);
    let result_undefined = arrayType.every(e => e[0] != undefined);
  
    console.log(result, arrayType);
  
    if (difference === 0 && result===false){
      change = {status:"OPEN", change:arrayType};
    }
    else if(result_undefined===false){
      change = {status:"INSUFFICIENT_FUNDS", change:[]};
    }
    else if(difference===0 && result){
      arrayType[0][1] = parseFloat(arrayType[0][1].toFixed(2));
      for(i = 1; i < Object.keys(cidictionary).length; i++){
        arrayType.push([Object.keys(cidictionary)[i], 0]);
      }
      console.log(arrayType);
      change = {status:"CLOSED", change:arrayType};
    }
  
    return change;
  
    console.log(arrayType);
  
  }
  
  console.log(checkCashRegister(19.5, 20, [["PENNY", 0.5], ["NICKEL", 0], ["DIME", 0], ["QUARTER", 0], ["ONE", 0], 
  ["FIVE", 0], ["TEN", 0], ["TWENTY", 0], ["ONE HUNDRED", 0]]));
  
  checkCashRegister(3.26, 100, [["PENNY", 1.01], ["NICKEL", 2.05], ["DIME", 3.1], ["QUARTER", 4.25], ["ONE", 90], 
  ["FIVE", 55], ["TEN", 20], ["TWENTY", 60], ["ONE HUNDRED", 100]]);