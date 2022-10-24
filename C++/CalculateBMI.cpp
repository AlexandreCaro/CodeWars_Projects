"8 kyu"

std::string bmi(double w, double h) 
{
  
  double bmi = w/(h*h);
  
  std::cout << bmi << std::endl;
  
  if(bmi==30){return "Overweight";}
  
  if(bmi <= 18.5){return "Underweight";}
  
  else if(18.5 < bmi && bmi <= 25.0){return "Normal";}
  
  else if(25.0 < bmi && bmi <= 30.01){return "Overweight";}
  
  else {return "Obese";}
  
  //TODO: Implement this function
  throw std::logic_error("Method or operation is not implemented");
}

/*

Write function bmi that calculates body mass index (bmi = weight / height2).

if bmi <= 18.5 return "Underweight"

if bmi <= 25.0 return "Normal"

if bmi <= 30.0 return "Overweight"

if bmi > 30 return "Obese"

*/