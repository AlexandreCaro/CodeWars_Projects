function humanReadable (seconds) {
  
    let hours = Math.floor(seconds / 3600);
    
    let minutes = Math.floor((seconds - hours * 3600)/60);
    
    let newSeconds = seconds - hours * 3600 - minutes * 60;
    
    console.log(hours, minutes, newSeconds);
    
    hours = hours.toString();
    minutes = minutes.toString();
    newSeconds = newSeconds.toString();
    
    let finalString = "";
    
    if(hours.length === 1) hours = "0" + hours;
    if(minutes.length===1) minutes = "0" + minutes;
    if(newSeconds.length===1) newSeconds = "0" + newSeconds;
    
    finalString += hours + ":" + minutes + ":" + newSeconds;
    
    return finalString;
    
  }

  "Another Solution"

  function humanReadable (seconds) {
    return [seconds/3600, seconds%3600/60, seconds%60].map(function(v){
      v = Math.floor(v).toString();
      return v.length===1 ? "0"+ v : v;
    }).join(":");
  }

  /* Description

  Write a function, which takes a non-negative integer (seconds) as input and returns the time in a human-readable format (HH:MM:SS)

HH = hours, padded to 2 digits, range: 00 - 99
MM = minutes, padded to 2 digits, range: 00 - 59
SS = seconds, padded to 2 digits, range: 00 - 59
The maximum time never exceeds 359999 (99:59:59)

You can find some examples in the test fixtures.

*/

/* Tests

const strictEqual = require("chai").assert.strictEqual;

describe('tests', function() {
  it('should format correctly', function() {
    strictEqual(humanReadable(0), '00:00:00', 'humanReadable(0)');
    strictEqual(humanReadable(59), '00:00:59', 'humanReadable(59)');
    strictEqual(humanReadable(60), '00:01:00', 'humanReadable(60)');
    strictEqual(humanReadable(90), '00:01:30', 'humanReadable(90)');
    strictEqual(humanReadable(3599), '00:59:59', 'humanReadable(3599)');
    strictEqual(humanReadable(3600), '01:00:00', 'humanReadable(3600)');
    strictEqual(humanReadable(45296), '12:34:56', 'humanReadable(45296)');
    strictEqual(humanReadable(86399), '23:59:59', 'humanReadable(86399)');
    strictEqual(humanReadable(86400), '24:00:00', 'humanReadable(86400)');
    strictEqual(humanReadable(359999), '99:59:59', 'humanReadable(359999)');
  });
});

*/