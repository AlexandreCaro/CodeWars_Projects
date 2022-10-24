function dropElements(arr, func) {

  for (let i=0; i< arr.length; i++){
    if(func(arr[i])) return arr.slice(i);
  }

  return [];

  //return arr.filter(element => func(element));
}

dropElements([1, 2, 3], function(n) {return n < 3; });