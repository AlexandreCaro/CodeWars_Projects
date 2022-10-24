"8 kyu"

int square_sum(const std::vector<int>& numbers)
{
  
    int somme = 0;
  
    for(int i=0; i< numbers.size(); i++){
      std::cout << numbers[i];
      somme += numbers[i]*numbers[i];
    }
  
  return somme;
  
  
}