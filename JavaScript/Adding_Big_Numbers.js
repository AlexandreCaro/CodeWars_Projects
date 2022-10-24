"4 kyu(Medium+)"

function add(first, second) {
    
    var temp;
    
    if(first.length < second.length){
      temp = first;
      first = second;
      second = temp;
    }
    
    var sum = '';
      var carry = 0;
      var diff = second.length - first.length;
      for (i = first.length - 1; i >= 0; i--) {
          var temp =
              (Number(first.charAt(i)) % 10) +
              (Number(second.charAt(i + diff)) % 10) +
              carry;
          if (temp >= 10) {
              sum = (temp % 10) + sum;
              carry = Math.floor(temp / 10);
          } else {
              sum = temp + sum;
              carry = 0;
          }
      }
      if (carry) {
          sum = carry + sum;
      }
      return sum;
  }