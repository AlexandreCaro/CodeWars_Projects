"freeCodeCamp final project"

function convertToRoman(num) {
  let dictionary_letters = {1000: "M", 900:"CM", 500: "D", 400:"CD",
  100:"C", 90:"XC", 50:"L", 40:"XL", 10:"X", 9:"IX", 5:"V", 4:"IV", 1:"I"};

  let numbers = Object.keys(dictionary_letters);

  const n = numbers.length;

  let i = n-1;

  let remainder = Math.floor(num/numbers[i]);

  console.log("remainder", remainder);

  while(remainder===0){
    remainder = Math.floor(num/numbers[i])
    i-=1;
  }

  if(i<12){
    i+=1;
  }

  console.log("i", i, numbers[i], num);

  let numCopy = num;

  let stringFinal = "";

  while(numCopy > 0 && i>=0){
    
    remainder = Math.floor(numCopy/numbers[i]);
    numCopy = numCopy - numbers[i]*remainder;

    console.log(dictionary_letters[numbers[i]], numCopy, remainder);
    for(let j=0; j < remainder; j++){
      stringFinal += dictionary_letters[numbers[i]];
    }
    i-=1;
    if(i===0){
      numCopy = numCopy - numbers[i]*remainder;
    remainder = Math.floor(numCopy/numbers[i]);
    for(let j=0; j < remainder; j++){
      stringFinal += dictionary_letters[numbers[i]];
    }
    break;
    }
  }

  console.log("final", stringFinal);

  return stringFinal;
}

convertToRoman(36);

console.log(convertToRoman(16));

console.log(convertToRoman(1000));

/*

Convert the given number into a roman numeral.

Roman numerals	Arabic numerals
M	1000
CM	900
D	500
CD	400
C	100
XC	90
L	50
XL	40
X	10
IX	9
V	5
IV	4
I	1
All roman numerals answers should be provided in upper-case.

*/