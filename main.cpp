#include <iostream>
using namespace std;

int main(){
  int feet;
  int inches;
  int height;
  
  cout<< "Please enter your height (feet inches) : ";
  cin>> feet >> inches; // combined instead of using two cin inputs
  
  height = 12 * feet + inches;

  if (height < 60) { // if statement used to give a value for anyone under 5 feet
      cout << "You must be 5 feet or taller for the calculation." << endl;
  } else {
  
  cout<< "If you are a male, your ideal weight should be "<< 106 + 6 * (height - 60) << " pounds." << endl;
  cout<< "If you are a female, your ideal weight should be "<< 100 + 5 * (height - 60) << " pounds." << endl;
  }
    
  return 0; 
}
// end of code