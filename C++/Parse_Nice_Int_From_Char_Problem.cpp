"8 kyu(easy)"

"My solution"

//#include <string.h>

int get_age(const std::string& she_said) {
  
  char *pline = new char[she_said.size()+1];
  
  strcpy(pline, she_said.c_str());
  
  return std::stoi(pline);
}

"Ideal solution"

//#include <string>

using namespace std;

int get_age(const string& she_said) {
  return stoi(she_said);
}

"""

You ask a small girl,"How old are you?" She always says, "x years old", where x is a random number between 0 and 9.

Write a program that returns the girl's age (0-9) as an integer.

Assume the test input string is always a valid string. For example, the test input may be "1 year old" or "5 years old". The first character in the string is always a number.

"""

"""

Describe(SampleTests)
{
    It(should_pass_sample_tests)
    {
        Assert::That(get_age("5 years old"), Equals(5), ExtraMessage(R"(Invalid result for "5 years old")"));
        Assert::That(get_age("9 years old"), Equals(9), ExtraMessage(R"(Invalid result for "9 years old")"));
        Assert::That(get_age("1 year old"),  Equals(1), ExtraMessage(R"(Invalid result for "1 year old")"));
    }
};


"""