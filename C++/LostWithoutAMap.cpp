std::vector<int> maps(const std::vector<int> & values) {
  
  int n = values.size();
  
  std::vector<int> vecteur;
  
  for(int i = 0; i < n; i++){
    vecteur.push_back(2*values[i]);
  }
  
  return vecteur;
}

/*

Given an array of integers, return a new array with each value doubled.

For example:

[1, 2, 3] --> [2, 4, 6]

*/