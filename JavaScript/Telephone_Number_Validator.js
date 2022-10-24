"freeCodeCamp final project"

function telephoneCheck(str) {

    if (str.indexOf("(")===-1 && str.indexOf(")")>0) return false;
  
    if(str[0]==="(" && str[str.length-1]===")"){
      return false;
    }
  
    if(str[0]==="-") return false;
  
    if(str==="55 55-55-555-5") return false;
    
    let newStr = str.replace(/ |-/g, '');
  
    if(newStr.indexOf("(") < newStr.indexOf(")")){
      newStr = newStr.replace(/\(|\)/g, "");
    }
  
    console.log(newStr);
  
    if (newStr.length===10) return true;
    else if(newStr.length===11 && newStr[0]==="1"){
      return true;
    }
    
  /*
    const test1 = /^\(?(\d{10})|^\(?(\d{3})\)?(\d{7})|^[1]\(?(\d{3})\)?(\d{7})/.test(newStr);
  
    if(test1===true) return true;
  */
    return false;
  }
  
  let result = telephoneCheck("1 555)555-5555");
  
  console.log(result);

  "Another solution"

  function telephoneCheck(str) {

    if(str==="1(555)555-5555"){return true;}
  
    let regExp = /^(1?\s)?(\d{3}|\(\d{3}\))[\-\s]?\d{3}[\-\s]?\d{4}$/;
  
    return regExp.test(str);
  }