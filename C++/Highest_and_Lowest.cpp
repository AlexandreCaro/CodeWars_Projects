"7 kyu(easy+)"

//#include <string>

std::string highAndLow(const std::string& numbers){
  
  int n = numbers.length();
  
  std::cout << numbers << std::endl;
  
  int a = 0;
  
  std::string begining = "";
  
  while(numbers[a]!=' '){
    begining += numbers[a];
    a+=1;
  }
  
  int maximum=stoi(begining), minimum=stoi(begining);
  
  std::string currentString;
  
  int currentNumber;
  
  int j;
  
  int i=0;
  
  while(i<n){
    if(numbers[i]==' '){
      i+=1;
      continue;}
    else{
      currentString = "";
      j=i;
      while(numbers[j]!=' ' && j < n){
        currentString += numbers[j];
        j+=1;
      }
      i = j;
      currentNumber =  stoi(currentString);
      std::cout << currentNumber << std::endl;
      if(maximum< currentNumber){maximum = currentNumber;}
      else if(minimum>currentNumber) {minimum = currentNumber;}
      i+=1;
    }
  }
  
  std::string finalString = "";
  
  finalString += std::to_string(maximum) + " " + std::to_string(minimum);
  
  return finalString;
}

"Ideal solution"

//#include <string>
//#include <sstream>
//#include <limits>

std::string highAndLow(const std::string& numbers){
  std::stringstream ss(numbers);
  int temp, min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();
  
  while (ss >> temp){
    min = (temp < min) ? temp : min;
    max = (temp > max) ? temp : max;
  };
  return std::to_string(max) + " " + std::to_string(min);
}

"""In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.

Examples
highAndLow("1 2 3 4 5");  // return "5 1"
highAndLow("1 2 -3 4 5"); // return "5 -3"
highAndLow("1 9 3 4 -5"); // return "9 -5"
Notes
All numbers are valid Int32, no need to validate them.
There will always be at least one number in the input string.
Output string must be two numbers separated by a single space, and highest number is first."""

"""Describe(ExampleTests){
  It(Test1){
    Assert::That(highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4"), Equals("42 -9"));
  }
  It(Test2){
    Assert::That(highAndLow("1 2 3"), Equals("3 1"));
  }
};"""