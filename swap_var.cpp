#include <iostream>
using namespace std;

int main()
{
  int a = 4;
  int b = 5;
  
  a = a + b;  // a becomes 9
  b = a - b;  // b becomes 4
  a = a - b;  // a becomes 5
  
  cout << "After Swapping: a = " << a << ", b = " << b;

}
