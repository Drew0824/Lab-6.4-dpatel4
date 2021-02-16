#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << setprecision (2) << fixed;


  double length;
  cout  <<"Enter the lenght of the carpet\n" << endl;
  cin >> length;


  double cost;
  double discount;
  {
  
  cost = length * 2.75;
  if (length <= 10)
  cout <<"The cost of the carpet is $" << cost  << endl;
  else
  discount = (2.75 * (length - 10) * .15);
  cost = cost - discount;
  cout  <<"The cost of the carpet with discount is $"<< cost << endl;
  }
  
  
  
   



}