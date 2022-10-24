"6 kyu(easy++)"

std::string likes(const std::vector<std::string> &names)
{
  
    int n = names.size();
  
    if(n==0){return "no one likes this";}
  
    if(n==1){return names[0] + " likes this"; }
  
    if(n==2){return names[0] + " and " + names[1] + " like this";}
  
    if(n==3){return names[0] + ", " + names[1] + " and " + names[2] + " like this";}
  
    if(n >= 4){
      
      std::string reste = std::to_string(n-2);
      
      return names[0] + ", " + names[1] + " and " + reste + " others like this";
    }
  
  
}

"""You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the text that should be displayed next to such an item.

Implement the function which takes an array containing the names of people that like an item. It must return the display text as shown in the examples:

[]                                -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"
Note: For 4 or more names, the number in "and 2 others" simply increases.

"""

"""

Describe(sample_tests)
{
    It(should_return_correct_text)
    {
        Assert::That(likes({}), Equals("no one likes this"));
        Assert::That(likes({"Peter"}), Equals("Peter likes this"));
        Assert::That(likes({"Jacob", "Alex"}), Equals("Jacob and Alex like this"));
        Assert::That(likes({"Max", "John", "Mark"}), Equals("Max, John and Mark like this"));
        Assert::That(likes({"Alex", "Jacob", "Mark", "Max"}), Equals("Alex, Jacob and 2 others like this"));
    }
};

"""