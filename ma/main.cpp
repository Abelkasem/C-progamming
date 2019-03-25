#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double x = -10.0, y = -10.0, result;


  result = atan2(y, x);

  cout << "atan2(y/x) = " << result << " radians" << endl;
  cout << "atan2(y/x) = " << result*180/3.141592 << " degrees" << endl;

  return 0;
}
