#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double a, b, c, d, e, f, g, x, y;
  cin >> a >> b >> c >> d >> e >> f;
  g = b*d - a*e;
  x = b*f - c*e;
  y = c*d - a*f;
  if (g == 0) {
    if (x != 0 || y != 0) cout << "No answer" << endl;
    else cout << "Too many" << endl;
  } else {
    cout << fixed;
    cout << "x=" << setprecision(2) << x/g << endl;
    cout << "y=" << setprecision(2) << y/g << endl;
  }
}
