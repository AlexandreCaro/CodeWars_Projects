"7 kyu(easy+)"

//#include <vector>

std::vector<int> solution(std::vector<int> nums) {
  
  int n = nums.size();
  
  if (n==0){return {};}
  
  sort(nums.begin(), nums.end());
  
  return nums;
}

"""

Finish the solution so that it sorts the passed in array of numbers. If the function passes in an empty array or null/nil value then it should return an empty array.

For example:

sortNumbers({1, 2, 10, 50, 5}) // sholud return {1, 2, 5, 10, 50}
sortNumbers({}) // should return {}

"""

"""
//include <vector>

typedef std::vector<int> v;

Describe(Advanced_Tests)
{
    It(advanced_tests)
    {
        Assert::That(solution({1,2,3,10,5}), Equals(v{1,2,3,5,10}));
        Assert::That(solution({}), Equals(v{}));
        Assert::That(solution({20,2,10}), Equals(v{2,10,20}));
        Assert::That(solution({2,20,10}), Equals(v{2,10,20}));
    }
};


"""