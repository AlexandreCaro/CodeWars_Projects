"8 kyu(easy)"

int hexToDec(std::string hexString)
{
    unsigned int x;
    std::stringstream ss;
    ss << std::hex << hexString;
  
    ss >> x;
  
    return x;
}

"""Complete the function which converts hex number (given as a string) to a decimal number."""

"""Tests

Describe(ExampleTests)
{
    It(BasicTests)
    {
        int expected = 1;
        int actual = hexToDec("1");
        Assert::That(actual, Is().EqualTo(expected));
        
        expected = 10;
        actual = hexToDec("a");
        Assert::That(actual, Is().EqualTo(expected));
        
        expected = 16;
        actual = hexToDec("10");
        Assert::That(actual, Is().EqualTo(expected));
        
        expected = 255;
        actual = hexToDec("FF");
        Assert::That(actual, Is().EqualTo(expected));
        
        expected = -12;
        actual = hexToDec("-C");
        Assert::That(actual, Is().EqualTo(expected));
    }
};

"""