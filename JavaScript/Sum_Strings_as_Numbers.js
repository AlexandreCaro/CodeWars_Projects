"4 kyu(Medium+)"

function sumStrings(a,b) {
  
    let firstInt = BigInt(a);
    
    let secondInt = BigInt(b);
    
    let result = firstInt + secondInt;
    
    return result.toString();
  
}

/* Description

Given the string representations of two integers, return the string representation of the sum of those integers.

For example:

sumStrings('1','2') // => '3'
A string representation of an integer will contain no characters besides the ten numerals "0" to "9".

*/

/* Tests

describe("Tests", () => {
  it("test", () => {
Test.assertEquals(sumStrings('123','456'),'579')
  });
});

*/