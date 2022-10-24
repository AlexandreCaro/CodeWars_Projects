class Tortoise
{
public:
    static std::vector<int> race(int v1, int v2, int g){
      
      int t = (3600*g)/(v2-v1);
      
      if (t<0){
        return {-1, -1, -1};
      }
      
      int hours = t/3600;
      
      int minutes = (t - hours*3600)/60;
      
      int seconds = t - hours*3600 - minutes*60;
      
      std::cout << v1 << " " << v2 << " " << g << std::endl;
      
      std::cout << t << " " << minutes << " " << seconds << std::endl;
      
      std::vector<int> time;
      
      time.push_back(hours);
      time.push_back(minutes);
      time.push_back(seconds);
      
      return time;
    };
};

"""The result will be an array [hour, min, sec] which is the time needed in hours, minutes and seconds (round down to the nearest second) or a string in some languages.

If v1 >= v2 then return nil, nothing, null, None or {-1, -1, -1} for C++, C, Go, Nim, Pascal, COBOL, Erlang, [-1, -1, -1] for Perl,[] for Kotlin or "-1 -1 -1".

Examples:
(form of the result depends on the language)

race(720, 850, 70) => [0, 32, 18] or "0 32 18"
race(80, 91, 37)   => [3, 21, 49] or "3 21 49"
Note:
See other examples in "Your test cases".

In Fortran - as in any other language - the returned string is not permitted to contain any redundant trailing whitespace: you can use dynamically allocated character strings.

** Hints for people who don't know how to convert to hours, minutes, seconds:

Tortoises don't care about fractions of seconds
Think of calculation by hand using only integers (in your code use or simulate integer division)
or Google: "convert decimal time to hours minutes seconds"

"""

"""
include <vector>

void testequal(std::vector<int> ans, std::vector<int> sol)
{
    Assert::That(ans, Equals(sol));
}
void dotest(int v1, int v2, int g, std::vector<int> expected)
{
    testequal(Tortoise::race(v1, v2, g), expected);
}

Describe(race_Tests)
{
    It(Fixed__Tests)
    {
        dotest(720, 850, 70, {0, 32, 18});
        dotest(820, 81, 550, {-1, -1, -1});
        dotest(80, 91, 37, {3, 21, 49});
    }
};

"""