"8 kyu(easy)"

// #include <vector>

std::vector<int> invert(std::vector<int> values)
{
    std::vector<int> vecteur;
  
    int n = values.size();  
  
    for(int i=0; i < n; i++){
      vecteur.push_back(-1*values[i]);
    }
  
  return vecteur;
}

/*

Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.

invert([1,2,3,4,5]) == [-1,-2,-3,-4,-5]
invert([1,-2,3,-4,5]) == [-1,2,-3,4,-5]
invert([]) == []

*/

/* Tests:

Describe(test_invert)
{
    It(should_pass_some_basic_tests)
    {
        Assert::That(invert({1, 2, 3, 4, 5}), Equals(std::vector<int>{-1, -2, -3, -4, -5}));
        Assert::That(invert({1, -2, 3, -4, 5}), Equals(std::vector<int>{-1, 2, -3, 4, -5}));
        Assert::That(invert({}), Equals(std::vector<int>{}));
    }
};

*/