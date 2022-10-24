"8 kyu"

//#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
   
  int currentMin = list[0];
  
  for(int i=0; i < list.size(); i++){
    if(currentMin > list[i]){
      currentMin = list[i];
    }
  }
  
  return currentMin;
  
}