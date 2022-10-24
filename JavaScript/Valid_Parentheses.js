"5 kyu(medium)"

function validParentheses(parens) {
  
    let i=0;
  
    while (parens.indexOf("()")!==-1){
      parens = parens.replace("()", "");
      i+=1;
    }
  
    return parens === "";
  }

  /* Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid. 
  The function should return true if the string is valid, and false if it's invalid.

Examples
"()"              =>  true
")(()))"          =>  false
"("               =>  false
"(())((()())())"  =>  true
Constraints
0 <= input.length <= 100

*/

/* Tests

const { assert } = require('chai');

describe("Tests", () => {
  it(`values: "("`, () => assert.strictEqual(validParentheses( "(" ), false));
  it(`values: ")"`, () => assert.strictEqual( validParentheses( ")" ), false));
  it(`values: ""`, () => assert.strictEqual(validParentheses( "" ), true));
  it(`values: "()"`, () => assert.strictEqual(validParentheses( "()" ), true));
  it(`values: "())"`, () => assert.strictEqual(validParentheses( "())" ), false));
});

*/