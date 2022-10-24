"7 kyu(easy+)"

long long rowSumOddNumbers(unsigned n){
  
  std::cout <<  n;
  
  unsigned count = 1;
  
  if(n==1){
    return 1;
  }
  
  std::vector<int> container;
    
  unsigned innerCount = 0;
  
  int number = 1;
  
  while(count<=n){
    while(innerCount<count){
      if(count==n){
        container.push_back(number);
      }
      number+=2;
      innerCount +=1;
    }
    innerCount = 0;
    count+=1;
  }
  
  unsigned somme = 0;
  
  for(unsigned long i=0; i < container.size(); i++){
    std::cout << " " << container[i];
    somme = somme + container[i];
  }
  
  return somme;
  
}

"""

Given the triangle of consecutive odd numbers:

             1
          3     5
       7     9    11
   13    15    17    19
21    23    25    27    29
...
Calculate the sum of the numbers in the nth row of this triangle (starting at index 1) e.g.: (Input --> Output)

1 -->  1
2 --> 3 + 5 = 8

"""

"""

Describe(RowSumOddNumbers){
  It(BasicTests){
    Assert::That(rowSumOddNumbers(1), Equals(1));
    Assert::That(rowSumOddNumbers(42), Equals(74088));
  }
};

"""