"8 kyu(easy)"

std::string to_alternating_case(const std::string& str)
{
	std::string newString = "";
  
  int n = str.length();
  
  for(int i=0; i < n; i++){
    if(std::isupper(str[i])){
      newString += std::tolower(str[i]);
    }
    else if(std::islower(str[i])){
      newString += std::toupper(str[i]);
    }
    else {
      newString += str[i];
    }
  }
  
  return newString;
}

/* Description

Define String.prototype.toAlternatingCase (or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase
 in your selected language; see the initial solution for details) such that each lowercase letter becomes uppercase and each uppercase 
 letter becomes lowercase. For example:

"hello world".toAlternatingCase() === "HELLO WORLD"
"HELLO WORLD".toAlternatingCase() === "hello world"
"hello WORLD".toAlternatingCase() === "HELLO world"
"HeLLo WoRLD".toAlternatingCase() === "hEllO wOrld"
"12345".toAlternatingCase() === "12345" // Non-alphabetical characters are unaffected
"1a2b3c4d5e".toAlternatingCase() === "1A2B3C4D5E"
"String.prototype.toAlternatingCase".toAlternatingCase() === "sTRING.PROTOTYPE.TOaLTERNATINGcASE"
As usual, your function/method should be pure, i.e. it should not mutate the original string.

*/

/* Tests

 Adapted from the tests originally written by a code warrior donaldsebleung 
Describe(basic)
{
  It(ShouldPassAllTheTestsProvided)
  {
    
       Assert::That(to_alternating_case("hello world"), Equals("HELLO WORLD") );
       Assert::That(to_alternating_case("HELLO WORLD"), Equals("hello world") );
       Assert::That(to_alternating_case("hello WORLD"), Equals("HELLO world") );
       Assert::That(to_alternating_case("HeLLo WoRLD"), Equals("hEllO wOrld") );
       Assert::That(to_alternating_case("12345"), Equals("12345") );
       Assert::That(to_alternating_case("1a2b3c4d5e"), Equals("1A2B3C4D5E") );
       Assert::That(to_alternating_case("String.prototype.toAlternatingCase"), Equals("sTRING.PROTOTYPE.TOaLTERNATINGcASE") );
       Assert::That(to_alternating_case(to_alternating_case("Hello World")), Equals("Hello World"));
		   Assert::That(to_alternating_case("altERnaTIng cAsE"), Equals("ALTerNAtiNG CaSe") );
		   Assert::That(to_alternating_case("ALTerNAtiNG CaSe"), Equals("altERnaTIng cAsE") );
		   Assert::That(to_alternating_case("altERnaTIng cAsE <=> ALTerNAtiNG CaSe"), Equals("ALTerNAtiNG CaSe <=> altERnaTIng cAsE") );
		   Assert::That(to_alternating_case("ALTerNAtiNG CaSe <=> altERnaTIng cAsE"), Equals("altERnaTIng cAsE <=> ALTerNAtiNG CaSe") );
  }

};

*/