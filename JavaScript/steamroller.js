function steamrollArray(arr) {

  let liste = arr.reduce((acc, el) => acc.concat(el), [])

  while(liste.some(r=> Array.isArray(r))){
    liste = liste.reduce((acc, el) => acc.concat(el), [])
  }

  return liste

  // while(arr.some(r=> Array.isArray(r))){arr = arr.flat();}
  
  // return arr;
}

"Correction"

function steamrollArray(arr) {
  const flattenedArray = [];
  // Loop over array contents
  for (let i = 0; i < arr.length; i++) {
    if (Array.isArray(arr[i])) {
      // Recursively flatten entries that are arrays
      //  and push into the flattenedArray
      flattenedArray.push(...steamrollArray(arr[i]));
    } else {
      // Copy contents that are not arrays
      flattenedArray.push(arr[i]);
    }
  }
  return flattenedArray;
};

steamrollArray([1, [2], [3, [[4]]]]);