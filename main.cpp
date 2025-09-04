#include <iostream>
using namespace std;

int main() {
  const double length = 7.2; //setting length value
  const double width = 1.3; //setting width value
  double area = length * width; //calculating area
  double perimeter = 2 * ( length + width); //calculating perimeter

  cout << "Rectangle Properties: " << endl; //Output title

  //listing outputs

  cout << "Length = " << length << endl; 
  cout << "Width = " << width << endl;
  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;
  
  return 0;
}