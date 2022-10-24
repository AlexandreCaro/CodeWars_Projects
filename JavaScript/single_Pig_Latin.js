"5 kyu(Medium)"

function pigIt(str){
  
    let arrString = str.split(" ");
    
    let newArr = [];
    
    for (let i = 0; i < arrString.length; i++){
      if(/^[A-Za-z0-9]*$/.test(arrString[i])){
        newArr.push(arrString[i].substring(1)+arrString[i][0] + "ay");
      }
      else {
        newArr.push(arrString[i]);
      }
    }
    
    let newString = newArr.join(" ");
    
    return newString;
  }

"Another solution"

function pigIt(str){
    return str.split(" ").map(word => 
              /^[A-Za-z0-9]*$/.test(word) ? word.substring(1) + word[0] + "ay" : word).join(" ");
  }

/* Move the first letter of each word to the end of it, then add "ay" to the end of the word. Leave punctuation marks untouched.

Examples
pigIt('Pig latin is cool'); // igPay atinlay siay oolcay
pigIt('Hello world !');     // elloHay orldway !

*/

/* Tests

describe("Tests", () => {
  it("test", () => {
Test.assertEquals(pigIt('Pig latin is cool'),'igPay atinlay siay oolcay')
Test.assertEquals(pigIt('This is my string'),'hisTay siay ymay tringsay')
});
});

*/