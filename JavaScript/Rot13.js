function rot13(message){
    let dictionary = {"A": "N", "B":'O', 'C':'P', 'D':'Q', 'E':'R', 'F':'S', 'G':'T', 'H':'U',
    'I':'V', 'J':'W', 'K':'X', 'L':'Y', 'M':'Z', 'N':'A', 'O':'B', 'P':'C', 'Q':'D', 'R':'E', 'S':'F',
    'T':'G', 'U':'H', 'V':'I', 'W':'J', 'X':'K', 'Y':'L', 'Z':'M'};
    
    let finalString = "";
    
    for(let element of message){
      if(dictionary.hasOwnProperty(element.toUpperCase())){
         if(element.toUpperCase()===element){
           finalString += dictionary[element];
         }
        else {
          finalString += dictionary[element.toUpperCase()].toLowerCase();
        }
      }
      else {finalString += element;}
    }
    
    return finalString;
  }

  "Ideal Solution"

  function rot13(message){
    var a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    var b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
    return message.replace(/[a-z]/gi, c => b[a.indexOf(c)]);
  }

/* Description

ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet. 
ROT13 is an example of the Caesar cipher.

Create a function that takes a string and returns the string ciphered with Rot13. If there are numbers or special characters
included in the string, they should be returned as they are. Only letters from the latin/english alphabet should be shifted,
like in the original Rot13 "implementation".

*/

/* Tests

const chai = require("chai");
const assert = chai.assert;

describe("Tests", function() {
  it("Sample tests", function() {
    for (const [input, expected] of [["test", "grfg"], ["Test", "Grfg"]]) {
      assert.strictEqual(rot13(input), expected, `Test failed with messsage = '${input}'`);
    }
  });
});

*/