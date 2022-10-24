int stray(std::vector<int> numbers) {
  
  std::vector<int> duplicate;
  
  int n = numbers.size();
  
  for(int i=0; i <n; i++){
    if(std::count(numbers.begin(), numbers.end(), numbers[i])==1){
      return numbers[i];
    }
    else{
      continue;
    }
  }
  
};

/* Description

You are given an odd-length array of integers, in which all of them are the same, except for one single number.

Complete the method which accepts such an array, and returns that single different number.

The input array will always be valid! (odd-length >= 3)

Examples
[1, 1, 2] ==> 2
[17, 17, 3, 17, 17, 17, 17] ==> 3

*/

/* Tests

Describe(solution_test)
{
    It(simple_array_1)
    {
        Assert::That(stray({1, 1, 2}), Equals(2));
    }
};

*/